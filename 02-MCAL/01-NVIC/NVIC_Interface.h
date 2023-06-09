/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  NVIC_Interface.h
 *       Module:  NVIC
 *
 *  Description:  <Write File DESCRIPTION here>     
 *  
 *********************************************************************************************************************/
#ifndef NVIC_INTERFACE_H
#define NVIC_INTERFACE_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/


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

void NVIC_voidSetEnable   (u8 copy_u8InterruptId);
void NVIC_voidClearEnable (u8 copy_u8InterruptId);
void NVIC_voidSetPending  (u8 copy_u8InterruptId);
void NVIC_voidClearPending(u8 copy_u8InterruptId);
u8   NVIC_u8PendingRead   (u8 copy_u8InterruptId);
u8   NVIC_u8EnableRead    (u8 copy_u8InterruptId);
u8   NVIC_u8ActiveRead    (u8 copy_u8InterruptId);
void NVIC_VoidSetPeriority(u8 copy_u8InterruptId,u8 copy_u8NumberOfGroups,u8 copy_u8GroupPeriority,u8 copy_u8SubPeriority);


 
#endif  /* NVIC_INTERFACE_H */

/**********************************************************************************************************************
 *  END OF FILE: NVIC_Interface.h
 *********************************************************************************************************************/