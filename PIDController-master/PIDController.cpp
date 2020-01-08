#include "Arduino.h"
#include "PIDController.h"

float PIDController::PIDcal_pitch(float set_pitch, float actual_pitch){
	static float pre_error = 0;
	static float integral = 0;
	float error;
	float derivative;
	float output;

	// calc P,I,D
	error = set_pitch - actual_pitch;
	if(abs(error) > epsilon_pitch){
		integral = integral + error*dt;
	}
	derivative = (error-pre_error)/dt;
	output = Kp_pitch*error + Ki_pitch*integral + Kd_pitch*derivative;
	pre_error = error;
	return output;
}

float PIDController::PIDcal_roll(float set_roll, float actual_roll){
	static float pre_error = 0;
	static float integral = 0;
	float error;
	float derivative;
	float output;

	// calc P,I,D
	error = set_roll - actual_roll;
	if(abs(error) > epsilon_roll){
		integral = integral + error*dt;
	}
	derivative = (error-pre_error)/dt;
	output = Kp_roll*error + Ki_roll*integral + Kd_roll*derivative;
	pre_error = error;
	return output;
}

float PIDController::PIDcal_yaw(float set_yaw, float actual_yaw){
	static float pre_error = 0;
	static float integral = 0;
	float error;
	float derivative;
	float output;

	// calc P,I,D
	error = set_yaw - actual_yaw;
	if(abs(error) > epsilon_yaw){
		integral = integral + error*dt;
	}
	derivative = (error-pre_error)/dt;
	output = Kp_yaw*error + Ki_yaw*integral + Kd_yaw*derivative;
	pre_error = error;
	return output;
}

float PIDController::PIDcal_depth(float set_depth, float actual_depth){
	static float pre_error = 0;
	static float integral = 0;
	float error;
	float derivative;
	float output;

	// calc P,I,D
	error = set_depth - actual_depth;
	if(abs(error) > epsilon_depth){
		integral = integral + error*dt;
	}
	derivative = (error-pre_error)/dt;
	output = Kp_depth*error + Ki_depth*integral + Kd_depth*derivative;
	pre_error = error;
	return output;
}
