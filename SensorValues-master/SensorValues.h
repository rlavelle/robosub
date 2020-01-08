#ifndef SensorValues_h
#define SensorValues_h

#include "Arduino.h"
#include "MPU9250.h"

class SensorValues{
	public:
		// variables
		float accel_data[3];
		float gyro_data[3];
		float mag_data[3];
		float pitch;
		float roll;
		float yaw;

		// functions
		void get_accel_data(MPU9250 imu);
		void get_gyro_data(MPU9250 imu);
		void get_mag_data(MPU9250 imu);
		void calc_pitch();
		void calc_roll();
		void calc_yaw();
		void print_angles();
};

#endif
