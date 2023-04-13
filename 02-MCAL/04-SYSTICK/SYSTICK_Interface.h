

/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  SYSTICK_Interface.h
 *       Module:  SYSTICK
 *
 *  Description:  <Write File DESCRIPTION here>     
 *  
 *********************************************************************************************************************/
#ifndef SYSTICK_INTERFACE_H
#define SYSTICK_INTERFACE_H


/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
#define     STK_SYSTEMCLK      0
#define     STK_PIOSCDIV4      1

#define     STK_SINGLESHOT     0
#define     STK_PERIODIC       1

/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
void STK_voidInit               (void);
void STK_voidSetBusyWait        ( u32 Copy_u32Ticks );
void STK_voidSetIntervalSingle  ( u32 Copy_u32Ticks, void (*Copy_ptr)(void) );
void STK_voidSetIntervalPeriodic( u32 Copy_u32Ticks, void (*Copy_ptr)(void) );
void STK_voidStopInterval       (void);
u32  STK_u32GetElapsedTime      (void);
u32  STK_u32GetRemainingTime    (void);
void STK_VoidDelayms            (u32 Copy_u32Delay);

 
#endif  /* SYSTICK_INTERFACE_H */

/**********************************************************************************************************************
 *  END OF FILE: SYSTICK_Interface.h
 *********************************************************************************************************************/