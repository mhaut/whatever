#ifndef APM_I2CSonar_h
#define APM_I2CSonar_h


class APM_I2CSonar_Class
{
  private:
    uint8_t I2CSonar_State;

  public:
	int32_t RawSonar;

	APM_I2CSonar_Class();  // Constructor
	void init(int initialiseWireLib = 1);
	uint8_t read();
};

#endif
