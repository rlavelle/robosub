#ifndef PIDController_h
#define PIDController_h

class PIDController{
	public:
		// variables
		float epsilon_pitch = 0.01;
		float epsilon_roll = 0.01;
		float epsilon_yaw = 0.01;
		float epsilon_depth = 0.01;
		float dt = 0.01; 
		float Kp_pitch = 0.1;
		float Kd_pitch = 0.01;
		float Ki_pitch = 0.005;
		float Kp_roll = 0.1;
		float Kd_roll = 0.01;
		float Ki_roll = 0.005;
		float Kp_yaw = 0.1;
		float Kd_yaw = 0.01;
		float Ki_yaw = 0.005;
		float Kp_depth = 0.1;
		float Kd_depth = 0.01;
		float Ki_depth = 0.005;
		
		//functions
		float PIDcal_pitch(float set_pitch, float actual_pitch);
		float PIDcal_roll(float set_roll, float actual_roll);
		float PIDcal_yaw(float set_yaw, float actual_yaw);
		float PIDcal_depth(float set_depth, float actual_depth);
};

#endif
