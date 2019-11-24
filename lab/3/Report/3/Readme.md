
![montage-mpu-6050](https://user-images.githubusercontent.com/48890122/69488622-25b38400-0e6c-11ea-9e0d-bc091c370f76.png)

Here is the schematic representation 
![montagempu-6050schéma](https://user-images.githubusercontent.com/48890122/69488614-15030e00-0e6c-11ea-9697-5e55eb2f3e90.png)


We will make use only of the first four pins: VCC, GND, SDA, and SCL. First, we connect the module’s VCC to the Arduino’s 5V pin. Then, the module’s GND is connected to one of the Arduino’s GND pins. 
Next, we have to set up the I2C connection between the module and the Arduino we connect SCL to the pin A5 and SDA to A4 pin . 

Basically the module MPU6050 is a device that is able de mesure acceleration because of  3-Axis Gyroscope   and angular variation because of a 3-Axis accelerometer. So the goal of our experiment is to mesure both accelaration and angular variation of the device . We add the library  MPU6050  to connect the sensor to the arduino card and for the module to be able to display the collected data. 



