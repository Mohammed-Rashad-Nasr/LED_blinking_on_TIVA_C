/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  MCU_Config.h
 *       Module:  MCU
 *
 *  Description:  <Write File DESCRIPTION here>     
 *  
 *********************************************************************************************************************/
#ifndef MCU_CONFIG_H
#define MCU_CONFIG_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
#define CLOCK_OSC MOSC
/******** CLOCK_OSC ***********************************
**** -MOSC      -> main oscilator *********************
**** -PIOSC     -> Precision internal oscilator *******
**** -PIOSCDIV4 -> Precision internal oscilator/4 *****
**** -LFIOSC    -> Low-frequancy internal oscilator ***
******************************************************/
#define PLL_USE   FALSE
/******** PLL_USE *******************************
**** -TRUE  -> use PLL (config its options) *****
**** -FALSE -> disable PLL  *********************
************************************************/
#define CRYSTAL_VAL 0x15
#define SYSDIV_VAL  0xF

#define TRUE   1
#define FALSE  0



/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/


 
#endif  /* MCU_CONFIG_H */

/**********************************************************************************************************************
 *  END OF FILE: MCU_Config.h
 *********************************************************************************************************************/