#include "Arduino.h"
#include "MPU9250.h"
#include "SensorValues.h"

void SensorValues::get_accel_data(MPU9250 imu){
	accel_data[0] = imu.getAccelX_mss();
	accel_data[1] = imu.getAccelY_mss();
	accel_data[2] = imu.getAccelZ_mss();
}

void SensorValues::get_gyro_data(MPU9250 imu){
	gyro_data[0] = imu.getGyroX_rads();
	gyro_data[1] = imu.getGyroY_rads();
	gyro_data[2] = imu.getGyroZ_rads();
}

void SensorValues::get_mag_data(MPU9250 imu){
	mag_data[0] = imu.getMagX_uT();
	mag_data[1] = imu.getMagY_uT();
	mag_data[2] = imu.getMagZ_uT();
}

void SensorValues::calc_pitch(){
	pitch = (180.0/PI)*atan2(accel_data[0],sqrt(pow(accel_data[1],2)+pow(accel_data[2],2)));
}

void SensorValues::calc_roll(){
	roll = (180.0/PI)*atan2(accel_data[1],sqrt(pow(accel_data[0],2)+pow(accel_data[2],2)));
}

void SensorValues::calc_yaw(){
	   yaw = (180/PI)*atan2(mag_data[1]*cos(roll)-mag_data[2]*sin(roll),mag_data[0]*cos(pitch)+mag_data[1]*sin(roll)*sin(pitch)+mag_data[2]*cos(roll)*sin(pitch));
}

void SensorValues::print_angles(){
	Serial.println(pitch);
	Serial.println(roll);
	Serial.println(yaw);
}
