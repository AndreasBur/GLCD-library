#ifndef ENCODER_H
#define ENCODER_H

#ifdef __cplusplus
	extern "C" {
#endif


/*************************************************************************************************************************************
*   D E F I N E S
*************************************************************************************************************************************/
#define	PHASE_A				7
#define PHASE_B				2
#define number_of_steps		2
#define ROT_LEFT			-1
#define ROT_RIGHT			1


/*************************************************************************************************************************************
*   P R O T O T Y P E S
*************************************************************************************************************************************/
int encoder_init();
extern void rotation_event(int rot_direction);

#ifdef __cplusplus
        }
#endif
#endif
