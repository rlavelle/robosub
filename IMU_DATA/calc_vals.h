#ifndef calc_vals_h
#define calc_vals_h

#include "Arduino.h"
#include "MPU9250.h"

class calc_vals{
	public:
		// variables
		float accel_data[3];
		float gyro_data[3];
		float mag_data[3];
		float pitch;
		float roll;
		float yaw;

		// functions
		get_accel_data(MPU9250 imu);
		get_gyro_data(MPU9250 imu);
		get_mag_data(MPU9250 imu);
		calc_pitch();
		calc_roll();
		calc_yaw();
		print_angles();
}

#endif
