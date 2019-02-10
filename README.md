# NodeMCU connecting BMP180
/***************************************************
 
  This is an example for the BMP085 Barometric Pressure & Temp Sensor
  
  These displays use I2C to communicate, 2 pins are required to  
  interface.

 Connect VCC of the BMP085 sensor to 3.3V (NOT 5.0V!).     
 Connect GND to Ground.   
 connect i2c bus with SDA=D2 and SCL=D1 of NodeMCU. 

 Connect SCL to i2c clock - on '168/'328 Arduino Uno/Duemilanove/etc thats Analog 5.     
 Connect SDA to i2c data - on '168/'328 Arduino Uno/Duemilanove/etc thats Analog 4.      
 EOC is not used, it signifies an end of conversion.     
 XCLR is a reset pin, also not used here.       
 
 ****************************************************/
