#include <aJSON.h>
#include <Ultrasonic.h>
#include <RotaryEncoder.h>;
#include <stdlib.h>
#include <Wire.h>

//Motores
#define MAX_BUFFER 13
int  Velocidad_MD=255,  Direccion_MD=1, Velocidad_MI=255,  Direccion_MI=1;
int RUEDA_DERECHA_VELOCIDAD = 5;     //5
int RUEDA_DERECHA_DIRECCION = 4;     //4
int RUEDA_IZQUIERDA_VELOCIDAD = 3;  //3
int RUEDA_IZQUIERDA_DIRECCION = 2;  //2 
char comando[14];
int pos_buffer =0;
int Enc_I, Enc_D,Pos_Encoder_I,Pos_Encoder_D;  
RotaryEncoder Encoder_I(6,7,0,0,0);
RotaryEncoder Encoder_D(9,8,0,0,0);
//Motores

//LDR
int PIN_LDR_FRONT = A10;
int PIN_LDR_LEFT = A9;
int PIN_LDR_RIGHT = A11;
int PIN_LDR_BACK = A8;
//LDR

//SIGUELINEAS
int PIN_SL_L1 = A1; //Izquierda 1
int PIN_SL_R1 = A2; //Derecha 1 Siendo el 0 el medio del robot.
int PIN_SL_L2 = A0;
int PIN_SL_R2 = A3;
//SIGUELINEAS

//Numero de sonars
#define SONARS_COUNT 4

//Tipos y costantes del programa
#define TYPE_FLOAT "FLOAT"
#define TYPE_DOUBLE "DOUBLE"
#define TYPE_INT "INT"
#define TYPE_BOOL "BOOL"
#define TYPE_CHAR "CHAR"
#define ERROR_ID "ID_NOT_FOUND"
#define STATE_OK true
#define STATE_FAIL false

//IDS de los sensores
#define ID_SONARS 0
#define ID_LINES 1
#define ID_LDR 2
#define ID_MOTORS 3
#define ON_LED -1
#define OFF_LED -2

//Variables de lectura de comando
//FORMATO TRAMA QUERY SENSORES ?ID?
char ID_Query[4]; //ID Máximo 255
char Motors_Command[8];
int startQuery;
int nextPosition;
char inChar;
int startMotors;
Ultrasonic SFront(50,51,30000); // Trig, Echo
Ultrasonic SBack(10,11,30000); // Trig, Echo

void setup() {
  // put your setup code here, to run once:
  Wire.begin();
  delay(1000);
  Serial.begin(115200);	
  startQuery = 0;
  startMotors = 0;
  nextPosition = 0;
  ID_Query[0] = '\r';
  inChar = ' ';
  pinMode(13,OUTPUT);
  digitalWrite(13,LOW);
  pinMode(RUEDA_DERECHA_DIRECCION, OUTPUT);   // sets the pin as output
  pinMode(RUEDA_IZQUIERDA_DIRECCION, OUTPUT);   // sets the pin as output
  Mover_Ruedas(1,255,1,255);
  Pos_Encoder_I=0;
  Pos_Encoder_D=0;
  
  Wire.beginTransmission(113);
  Wire.write(0x02);
  Wire.write(0x5D);
  Wire.endTransmission();
}

void loop() {
  // put your main code here, to run repeatedly:
  //READ QUERY
  
  Enc_I = Encoder_I.readEncoder();
  Enc_D = Encoder_D.readEncoder();
 
  if (Enc_I != 0 )
    Pos_Encoder_I+=Enc_I;
  
  if (Enc_D != 0 )
    Pos_Encoder_D+=Enc_D;
  
  if(Serial.available() > 0)
  {
    inChar = Serial.read();
    if(inChar == '?'){
      startQuery++;
      if(startQuery == 2)
      {
        ID_Query[nextPosition] = '\r';
        processQUERY(ID_Query);
        ID_Query[0] = '\r';
        nextPosition = 0;
        startQuery = 0;  
      } 
    }
    else
    {
      if(startQuery == 1)
      {
        if(nextPosition < 4){
          ID_Query[nextPosition] = inChar;
          nextPosition++;
        }
        else
        {
          ID_Query[0] = '\r';
          nextPosition = 0;
          startQuery = 0;
        }
      }
      else
      {
        if(inChar == 'M'){
          startMotors++;
          if(startMotors == 2)
          {
            transformNumbers(Motors_Command,Velocidad_MD,Direccion_MD,Velocidad_MI,Direccion_MI);
            Mover_Ruedas(Direccion_MD, Velocidad_MD,Direccion_MI,Velocidad_MI);    
            send_OKMessage(3, "");
            Motors_Command[0] = '\r';
            nextPosition = 0;
            startMotors = 0;  
          } 
        }
        else
        {
          if(startMotors == 1 && inChar != ':')
          {
            if(nextPosition < 8){
              Motors_Command[nextPosition] = inChar;
              nextPosition++;
            }
            else
            {
              Motors_Command[0] = '\r';
              nextPosition = 0;
              startMotors = 0;
            }
          }
        }
      }
      
      //Control de motores
      
      
    }
    
  }
  
}

//Recibe una cadena que contiene un numero, relativo al ID de consulta de los sentores
void processQUERY(char ID[4])
{
  int num = atoi(ID);
  switch(num)
  {
    case ID_SONARS: 
      send_SONARS_Data();
      break;
    case ID_LINES:
      send_LINES_Data();
      break;
    case ID_LDR:
      send_LDR_Data();
      break;
    case ID_MOTORS:
      send_MOTORS_Data();
      break;
    case ON_LED:
      on_LED();
      break;
    case OFF_LED:
      off_LED();
      break;
    default:
      send_ERRORMessage(num, ERROR_ID);
      break;
  };
}


void send_ERRORMessage(int IDMessage, char *Message)
{
  
  aJsonObject* sData = aJson.createObject();
  //Si ocurre un error al crear el objeto no se envía nada
  if(sData == NULL)
  {
    return;
  }
  
  //Root  
  aJson.addNumberToObject(sData,"ID",IDMessage);
  aJson.addBooleanToObject(sData,"VALID",STATE_FAIL);
  aJson.addStringToObject(sData,"INF",Message);
  
  char *message = aJson.print(sData,128);
  if(message != NULL)
  {
    Serial.println(message);
    free(message);
  }

  aJson.deleteItem(sData);
  
}

void send_OKMessage(int IDMessage, char *Message)
{
  
  aJsonObject* sData = aJson.createObject();
  //Si ocurre un error al crear el objeto no se envía nada
  if(sData == NULL)
  {
    return;
  }
  
  //Root  
  aJson.addNumberToObject(sData,"ID",IDMessage);
  aJson.addBooleanToObject(sData,"VALID",STATE_OK);
  aJson.addStringToObject(sData,"INF","");
  
  char *message = aJson.print(sData,128);
  if(message != NULL)
  {
    Serial.println(message);
    free(message);
  }

  aJson.deleteItem(sData);
  
}

//Crea una estructura JSON para enviar los datos de los 4 sonars montados inicialmente en el robot
void send_SONARS_Data()
{
  int readingRight = -1, readingLeft = -1;
  Wire.beginTransmission(127);
  Wire.write(byte(0x00));
  Wire.write(byte(0x51));
  Wire.endTransmission();
  Wire.beginTransmission(113);
  Wire.write(byte(0x00));
  Wire.write(byte(0x51));
  Wire.endTransmission();
  delay(70);
  
  Wire.beginTransmission(127);
  Wire.write(byte(0x02));
  Wire.endTransmission();
  Wire.requestFrom(127,2);
  if(2 <= Wire.available())
  {
    readingRight = Wire.read();
    readingRight = readingRight << 8;
    readingRight |= Wire.read();
  }
  
  Wire.beginTransmission(113);
  Wire.write(byte(0x02));
  Wire.endTransmission();
  Wire.requestFrom(113,2);
  if(2 <= Wire.available())
  {
    readingLeft = Wire.read();
    readingLeft = readingLeft << 8;
    readingLeft |= Wire.read();
  }
  
  int SONARS_NUM = 4;
  aJsonObject* sData = aJson.createObject();
  //Si ocurre un error al crear el objeto no se envía nada
  if(sData == NULL)
  {
    return;
  }
  
  //Root  
  aJson.addNumberToObject(sData,"SCOUNT",SONARS_COUNT);
  aJson.addNumberToObject(sData,"ID",ID_SONARS);
  aJson.addBooleanToObject(sData,"VALID",STATE_OK);
  aJson.addStringToObject(sData,"INF","");
  
  //Sonar Front
  aJsonObject* SF = aJson.createObject();
  aJsonObject* SF_DATA = aJson.createArray();
  aJson.addItemToArray(SF_DATA,aJson.createItem((int)SFront.Ranging(CM)));  
  //Tipo de datos del array
  aJson.addStringToObject(SF,"TYPE",TYPE_INT);
  //Grados desde el 0 en sentido horario del sonar
  aJson.addNumberToObject(SF,"DEGREES",0);
  //Altura del sonar
  aJson.addNumberToObject(SF,"HIGH",3);
  //Numero de datos en el array (los que puede tomar el sonar)
  aJson.addNumberToObject(SF,"DLENGTH",1);
  //Valor máximo y mínimo del array Ceil y Floor
  aJson.addNumberToObject(SF,"MAX",400);
  aJson.addNumberToObject(SF,"MIN",0);
  //Array de datos
  aJson.addItemToObject(SF,"VALUES",SF_DATA);
  //Añadimos el sonar al root
  aJson.addItemToObject(sData,"SFRONT",SF);
  //Sonar Back
  aJsonObject* SB = aJson.createObject();
  aJsonObject* SB_DATA = aJson.createArray();
  aJson.addItemToArray(SB_DATA,aJson.createItem((int)SBack.Ranging(CM)));  
  aJson.addStringToObject(SB,"TYPE",TYPE_INT);
  aJson.addNumberToObject(SB,"DEGREES",90);
  aJson.addNumberToObject(SB,"HIGH",3);
  aJson.addNumberToObject(SB,"DLENGTH",1);
  aJson.addNumberToObject(SB,"MAX",400);
  aJson.addNumberToObject(SB,"MIN",0);
  aJson.addItemToObject(SB,"VALUES",SB_DATA);
  aJson.addItemToObject(sData,"SBACK",SB);
  //Sonar Left
  aJsonObject* SL = aJson.createObject();
  aJsonObject* SL_DATA = aJson.createArray();
  aJson.addItemToArray(SL_DATA,aJson.createItem((int)readingLeft));  
  aJson.addStringToObject(SL,"TYPE",TYPE_INT);
  aJson.addNumberToObject(SL,"DEGREES",180);
  aJson.addNumberToObject(SL,"HIGH",3);
  aJson.addNumberToObject(SL,"DLENGTH",1);
  aJson.addNumberToObject(SL,"MAX",400);
  aJson.addNumberToObject(SL,"MIN",0);
  aJson.addItemToObject(SL,"VALUES",SL_DATA);
  aJson.addItemToObject(sData,"SLEFT",SL);
 
  //Sonar Right
  aJsonObject* SR = aJson.createObject();
  aJsonObject* SR_DATA = aJson.createArray();
  aJson.addItemToArray(SR_DATA,aJson.createItem((int)readingRight));  
  aJson.addStringToObject(SR,"TYPE",TYPE_INT);
  aJson.addNumberToObject(SR,"DEGREES",270);
  aJson.addNumberToObject(SR,"HIGH",3);
  aJson.addNumberToObject(SR,"DLENGTH",1);
  aJson.addNumberToObject(SR,"MAX",400);
  aJson.addNumberToObject(SR,"MIN",0);
  aJson.addItemToObject(SR,"VALUES",SR_DATA);
  aJson.addItemToObject(sData,"SRIGHT",SR);

  //Hasta 640 caracteres
  char *message = aJson.print(sData,512);
  if(message != NULL)
  {
    Serial.println(message);
    free(message);
  }

  aJson.deleteItem(sData);
}

void send_LINES_Data()
{
  int LN_NUM = 4;
  aJsonObject* lData = aJson.createObject();
  //Si ocurre un error al crear el objeto no se envía nada
  if(lData == NULL)
  {
    return;
  }
  
  //Root  
  aJson.addNumberToObject(lData,"LINES_COUNT",LN_NUM);
  aJson.addNumberToObject(lData,"ID",ID_LINES);
  aJson.addBooleanToObject(lData,"VALID",STATE_OK);
  aJson.addStringToObject(lData,"INF","");
  aJson.addNumberToObject(lData,"MAX",1023);
  aJson.addNumberToObject(lData,"MIN",0);
  aJson.addStringToObject(lData,"DATA_TYPE",TYPE_INT);
  
  //LINEA Derecho 1
  aJsonObject* LR1 = aJson.createObject();
  //Valor del LDR - 0 es el máximo de luz
  aJson.addNumberToObject(LR1,"VAL",analogRead(PIN_SL_R1));
  aJson.addItemToObject(lData,"LINE_RIGHT_1",LR1);
  
  //LINEA Derecho 2
  aJsonObject* LR2 = aJson.createObject();
  //Valor del LDR - 0 es el máximo de luz
  aJson.addNumberToObject(LR2,"VAL",analogRead(PIN_SL_R2));
  aJson.addItemToObject(lData,"LINE_RIGHT_2",LR2);
  
  //LINEA Izquierda 1
  aJsonObject* LI1 = aJson.createObject();
  //Valor del LDR - 0 es el máximo de luz
  aJson.addNumberToObject(LI1,"VAL",analogRead(PIN_SL_L1));
  aJson.addItemToObject(lData,"LINE_LEFT_1",LI1);
 
   //LINEA Izquierda 2
  aJsonObject* LI2 = aJson.createObject();
  //Valor del LDR - 0 es el máximo de luz
  aJson.addNumberToObject(LI2,"VAL",analogRead(PIN_SL_L2));
  aJson.addItemToObject(lData,"LINE_LEFT_2",LI2);
 
  char *message = aJson.print(lData,512);
  if(message != NULL)
  {
    Serial.println(message);
    free(message);
  }

  aJson.deleteItem(lData);
}

void send_LDR_Data()
{
  int LDR_NUM = 4;
  aJsonObject* ldrData = aJson.createObject();
  //Si ocurre un error al crear el objeto no se envía nada
  if(ldrData == NULL)
  {
    return;
  }
  
  //Root  
  aJson.addNumberToObject(ldrData,"LDR_COUNT",LDR_NUM);
  aJson.addNumberToObject(ldrData,"ID",ID_LDR);
  aJson.addBooleanToObject(ldrData,"VALID",STATE_OK);
  aJson.addStringToObject(ldrData,"INF","");
  aJson.addNumberToObject(ldrData,"MAX",1023);
  aJson.addNumberToObject(ldrData,"MIN",0);
  aJson.addStringToObject(ldrData,"DATA_TYPE",TYPE_INT);
  
  //LDR Derecho
  aJsonObject* LR = aJson.createObject();
  //Valor del LDR - 0 es el máximo de luz
  aJson.addNumberToObject(LR,"VAL",1023 - analogRead(PIN_LDR_RIGHT));
  aJson.addItemToObject(ldrData,"LDR_RIGHT",LR);
  
  //LDR Izquierdo
  aJsonObject* LI = aJson.createObject();
  //Valor del LDR - 0 es el máximo de luz
  aJson.addNumberToObject(LI,"VAL",1023 - analogRead(PIN_LDR_LEFT));
  aJson.addItemToObject(ldrData,"LDR_LEFT",LI);
  
  //LDR Front
  aJsonObject* LF = aJson.createObject();
  //Valor del LDR - 0 es el máximo de luz
  aJson.addNumberToObject(LF,"VAL",1023 - analogRead(PIN_LDR_FRONT));
  aJson.addItemToObject(ldrData,"LDR_FRONT",LF);
 
   //LDR Back
  aJsonObject* LB = aJson.createObject();
  //Valor del LDR - 0 es el máximo de luz
  aJson.addNumberToObject(LB,"VAL",1023 - analogRead(PIN_LDR_BACK));
  aJson.addItemToObject(ldrData,"LDR_BACK",LB);
 
  char *message = aJson.print(ldrData,512);
  if(message != NULL)
  {
    Serial.println(message);
    free(message);
  }

  aJson.deleteItem(ldrData);
  
}

void send_MOTORS_Data()
{
  int MOTORS_NUM = 2;
  int dist = 5;
  int diam = 4;
  aJsonObject* mData = aJson.createObject();
  //Si ocurre un error al crear el objeto no se envía nada
  if(mData == NULL)
  {
    return;
  }
  
  //Root  
  aJson.addNumberToObject(mData,"MCOUNT",MOTORS_NUM);
  aJson.addNumberToObject(mData,"ID",ID_MOTORS);
  aJson.addBooleanToObject(mData,"VALID",STATE_OK);
  aJson.addStringToObject(mData,"INF","");
  
  //Motor Derecho
  aJsonObject* MD = aJson.createObject();
  //Velocidad
  aJson.addNumberToObject(MD,"VEL",255-Velocidad_MD);
  //Direccion
  aJson.addNumberToObject(MD,"DIR",Direccion_MD);
  //Encoder
  aJson.addNumberToObject(MD,"ENC",Pos_Encoder_D);
  //Distancia de la rueda al centro
  aJson.addNumberToObject(MD,"DISTANCE",dist);
  //Diametro de la rueda
  aJson.addNumberToObject(MD,"DIAMETER",diam);
  //Tipo de datos
  aJson.addStringToObject(MD,"DATA_TYPE",TYPE_INT);
  
  aJson.addItemToObject(mData,"RIGHT_MOTOR",MD);
  
  
  //Motor Izquierdo
  aJsonObject* MI = aJson.createObject();
  //Velocidad
  aJson.addNumberToObject(MI,"VEL",255-Velocidad_MI);
  //Direccion
  aJson.addNumberToObject(MI,"DIR",Direccion_MI);
  //Encoder
  aJson.addNumberToObject(MI,"ENC",Pos_Encoder_I);
  
  aJson.addNumberToObject(MI,"DISTANCE",dist);
  //Diametro de la rueda
  aJson.addNumberToObject(MI,"DIAMETER",diam);
  //Tipo de datos
  aJson.addStringToObject(MI,"DATA_TYPE",TYPE_INT);
  
  aJson.addItemToObject(mData,"LEFT_MOTOR",MI);
 
  char *message = aJson.print(mData,512);
  if(message != NULL)
  {
    Serial.println(message);
    free(message);
  }

  aJson.deleteItem(mData);
}

void off_LED()
{
  digitalWrite(13,LOW);
  send_OKMessage(-2, "");
}

void on_LED()
{
  digitalWrite(13,HIGH);
  send_OKMessage(-1, "");
}

void Mover_Ruedas(int Direccion_RD, int Velocidad_RD,int Direccion_RI, int Velocidad_RI){

    if (Direccion_RI){
      digitalWrite(RUEDA_IZQUIERDA_DIRECCION,HIGH);
      analogWrite(RUEDA_IZQUIERDA_VELOCIDAD, Velocidad_RI);
    }      
      
    else{
      digitalWrite(RUEDA_IZQUIERDA_DIRECCION,LOW);
      analogWrite(RUEDA_IZQUIERDA_VELOCIDAD, 255-Velocidad_RI);    
    }     
    
    if (Direccion_RD){
      digitalWrite(RUEDA_DERECHA_DIRECCION,LOW);
      analogWrite(RUEDA_DERECHA_VELOCIDAD, 255-Velocidad_RD);      
    }    
    else{
      digitalWrite(RUEDA_DERECHA_DIRECCION,HIGH);
      analogWrite(RUEDA_DERECHA_VELOCIDAD, Velocidad_RD);
    }   
}

// M:200:1:200:1M

void transformNumbers(char MCommand[8], int &VEL_MD, int &DIR_MD, int &VEL_MI, int &DIR_MI)
{
  char VMD[4], VMI[4], DMD[2], DMI[2];
  VMD[0] = MCommand[0];
  VMD[1] = MCommand[1];
  VMD[2] = MCommand[2];
  VMD[3] = '\r';  
  
  VMI[0] = MCommand[4];
  VMI[1] = MCommand[5];
  VMI[2] = MCommand[6];
  VMI[3] = '\r'; 
  
  DMD[0] = MCommand[3];
  DMD[1] = 'r';  
  
  DMI[0] = MCommand[7];
  DMI[1] = 'r';
  
  VEL_MD = atoi(VMD);
  DIR_MD = atoi(DMD);
  VEL_MI = atoi(VMI);
  DIR_MI = atoi(DMI);
}
