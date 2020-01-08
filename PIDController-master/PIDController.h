#ifndef PIDController_h
#define PIDController_h

class PIDController{
	public:
		// variables
		float epsilon_pitch;
		float epsilon_roll;
		float epsilon_yaw;
		float epsilon_depth;
		float dt; 
		float Kp_pitch;
		float Kd_pitch;
		float Ki_pitch;
		float Kp_roll;
		float Kd_roll;
		float Ki_roll;
		float Kp_yaw;
		float Kd_yaw;
		float Ki_yaw;
		float Kp_depth;
		float Kd_depth;
		float Ki_depth;
		
		//functions
		float PIDcal_pitch(float set_pitch, float actual_pitch);
		float PIDcal_roll(float set_roll, float actual_roll);
		float PIDcal_yaw(float set_yaw, float actual_yaw);
		float PIDcal_depth(float set_depth, float actual_depth);
};

#endif
