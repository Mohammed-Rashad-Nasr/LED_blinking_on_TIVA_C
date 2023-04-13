
/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  SYSTICK_Program.c
 *        \brief  
 *
 *      \details  
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "SYSTICK_Interface.h"
#include "SYSTICK_Private.h"
#include "SYSTICK_Config.h"

/**********************************************************************************************************************
 *  LOCAL DATA 
 *********************************************************************************************************************/
static u8 STK_u8ModeOfInterval ;

/* Define Callback Global Variable */
static void(*STK_CallBack)(void);


/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/
void STK_voidInit(void)
{
#if STK_CLK_SRC == STK_SYSTEMCLK
    /* Disable STK - Disable STK Interrupt - Set clock source system clock */
	STK -> CTRL = 0x00000004;
#else
    /* Disable STK - Disable STK Interrupt - Set clock source PIOSC/4 */
	STK -> CTRL = 0;
	
#endif
}

void STK_voidSetBusyWait( u32 Copy_u32Ticks )
{
	/* Load ticks to load register */
	STK -> LOAD = Copy_u32Ticks;
	
	/* Start Timer */
	SET_BIT(STK->CTRL, 0);
	
	/* Wait till flag is raised */
	while( !(GET_BIT(STK->CTRL,16)));
	
	/* Stop Timer */
	SET_BIT(STK->CTRL, 0);
	STK -> LOAD = 0;
	STK -> VAL  = 0;
	
}

void STK_voidSetIntervalSingle  ( u32 Copy_u32Ticks, void (*Copy_ptr)(void) )
{
	/* Load ticks to load register */
	STK -> LOAD = Copy_u32Ticks;
	
	/* Enable STK Interrupt */
	SET_BIT(STK->CTRL, 1);
	
	/* Save CallBack */
	STK_CallBack = Copy_ptr;
	
	STK_u8ModeOfInterval = STK_SINGLESHOT;
	
	/* Start Timer */
	SET_BIT(STK->CTRL, 0);
	
}

void STK_voidSetIntervalPeriodic( u32 Copy_u32Ticks, void (*Copy_ptr)(void) )
{
	/* Load ticks to load register */
	STK -> LOAD = Copy_u32Ticks;
	
	/* Save CallBack */
	STK_CallBack = Copy_ptr;
	
	/* Enable STK Interrupt */
	SET_BIT(STK->CTRL, 1);
	
	STK_u8ModeOfInterval = STK_PERIODIC ;
	
	/* Start Timer */
	SET_BIT(STK->CTRL, 0);
}

void STK_voidStopInterval(void)
{
	/* Disable STK Interrupt */
	CLR_BIT(STK->CTRL, 1);
	
	/* Stop Timer */
	SET_BIT(STK->CTRL, 0);
	STK -> LOAD = 0;
	STK -> VAL  = 0;
}

u32  STK_u32GetElapsedTime(void)
{
	u32 Local_u32ElapsedTime;
	
	Local_u32ElapsedTime = STK -> LOAD - STK -> VAL ;
	
	return Local_u32ElapsedTime;
}

u32  STK_u32GetRemainingTime(void)
{
	u32 Local_u32RemainTime;
	
	Local_u32RemainTime = STK -> VAL ;
	
	return Local_u32RemainTime;
}

void SysTick_Handler(void)
{
	u8 Local_u8ClearTemp;
	
	if (STK_u8ModeOfInterval == STK_SINGLESHOT)
	{
		/* Disable STK Interrupt */
		CLR_BIT(STK->CTRL, 1);
	
		/* Stop Timer */
		SET_BIT(STK->CTRL, 0);
		STK -> LOAD = 0;
		STK -> VAL  = 0;
	}
	
	/* Callback notification */
	STK_CallBack();
	
	/* Clear interrupt flag */
	Local_u8ClearTemp = GET_BIT(STK->CTRL,16);
}

void STK_VoidDelayms (u32 Copy_u32Delay)
{
	STK_voidSetBusyWait( Copy_u32Delay * 1000 * STK_CLK_FREQ );
}


/**********************************************************************************************************************
 *  END OF FILE: SYSTICK_Program.c
 *********************************************************************************************************************/