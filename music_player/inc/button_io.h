#ifndef BUTTON_IO_H
#define BUTTON_IO_H

#ifdef __cplusplus
	extern "C" {
#endif


/**************************************************************************************
*   D E F I N E
***************************************************************************************/
#define BUTTON1_PIN		16
#define BUTTON2_PIN		15


/**************************************************************************************
*   P R O T O T Y P E
***************************************************************************************/
int button_init(int Button_pin, void (*function)(void));


#ifdef __cplusplus
        }
#endif
#endif