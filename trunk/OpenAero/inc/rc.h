/*********************************************************************
 * rc.h
 ********************************************************************/

// STICKSCALE constants
#define NORMAL_ROLL_PITCH_STICK_SCALE	3	// Experimental values
#define NORMAL_YAW_STICK_SCALE			3	// Reducing value by 1 doubles stick sensitivity
#define ACRO_ROLL_PITCH_STICK_SCALE		2
#define ACRO_YAW_STICK_SCALE			2
#define WARTHOX_ROLL_PITCH_STICK_SCALE	1
#define WARTHOX_YAW_STICK_SCALE			1


//***********************************************************
//* Externals
//***********************************************************

extern void RxGetChannels(void);

extern int16_t	RxInRoll;		// RC axis values
extern int16_t	RxInPitch;
extern uint16_t	RxInAux;
extern int16_t	RxInYaw;