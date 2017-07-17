#include <Wire.h>

void setup()
{
Wire.begin();                // Inicio Bus I2C
Serial.begin(115200);          // Inicio de comunicacin serie por USB a 9600 baudios
}

int reading = 0;              // Variable de lectura del rango

void loop()
{
//Inicializamos el dispositivo srf10
Wire.beginTransmission(112); // Iniciamos la transmisin en la direccin 0x70

Wire.write(byte(0x00));      // No situamos en el registro (0x00)
Wire.write(byte(0x51));      // Establecemos la medida en cm
Wire.endTransmission();      // Paramos la comunicacion

//Esperamos a la lectura
delay(70);

// Lectura del eco
Wire.beginTransmission(112); // Volvemos a iniciar la comunicacin con el dispositivo
Wire.write(byte(0x02));      // Escribimos el valor correspondiente a la medida de distancia que queremos
Wire.endTransmission();      // Paramos la transmision

// Esperamos dos bytes del sensor, en la direccin 0x70
Wire.requestFrom(112,2);

// Recivimos los datos del sensor
while(Wire.available() < 2) ;   // Si hay dos bytes disponibles

reading = Wire.read();  // Recibimos el primer byte
reading = reading << 8;    // Desplazamos la parte alta
reading |= Wire.read(); // Recibimos la parte baja
//Serial.println(reading);   // Imprimimos el valor obtenido en el puerto serie emulado
Serial.println(reading);

delay(1000);                  // Esperamos un tiempo para la lectura

}
