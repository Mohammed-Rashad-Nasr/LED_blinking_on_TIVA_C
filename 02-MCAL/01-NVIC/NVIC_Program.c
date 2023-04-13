
/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  NVIC_Program.c
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

#include "NVIC_Config.h"
#include "NVIC_Interface.h"
#include "NVIC_Private.h"

/**********************************************************************************************************************
*  LOCAL MACROS CONSTANT\FUNCTION
*********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL DATA 
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/
void NVIC_VoidSetPeriority(u8 copy_u8InterruptId,u8 copy_u8NumberOfGroups,u8 copy_u8GroupPeriority,u8 copy_u8SubPeriority)
{
	
	u8 local_u8Periority;
	
	SCB_APINT         = copy_u8NumberOfGroups ;
	local_u8Periority = copy_u8SubPeriority | ( copy_u8GroupPeriority << ((copy_u8NumberOfGroups - 0x05FA0300)/256) );
	
	if (copy_u8InterruptId<0)
	{
	}
	else 
	{
		NVIC->PRI[copy_u8InterruptId] = local_u8Periority << 4 ;
	}
	
}
void NVIC_voidSetEnable   (u8 copy_u8InterruptId)
{
	SET_BIT((NVIC->EN[copy_u8InterruptId/32]),(copy_u8InterruptId%32));
}
void NVIC_voidClearEnable (u8 copy_u8InterruptId)
{
	SET_BIT((NVIC->DIS[copy_u8InterruptId/32]),(copy_u8InterruptId%32));
}
void NVIC_voidSetPending  (u8 copy_u8InterruptId)
{
	SET_BIT((NVIC->PEND[copy_u8InterruptId/32]),(copy_u8InterruptId%32));
}
void NVIC_voidClearPending(u8 copy_u8InterruptId)
{
	SET_BIT((NVIC->UNPEND[copy_u8InterruptId/32]),(copy_u8InterruptId%32));
}
u8   NVIC_u8PendingRead   (u8 copy_u8InterruptId)
{
	return GET_BIT((NVIC->PEND[copy_u8InterruptId/32]),(copy_u8InterruptId%32));
}
u8   NVIC_u8EnableRead    (u8 copy_u8InterruptId)
{
	return GET_BIT((NVIC->EN[copy_u8InterruptId/32]),(copy_u8InterruptId%32));
}
u8   NVIC_u8ActiveRead    (u8 copy_u8InterruptId)
{
	return GET_BIT((NVIC->ACTIVE[copy_u8InterruptId/32]),(copy_u8InterruptId%32));
}


/**********************************************************************************************************************
 *  END OF FILE: NVIC_Program.c
 *********************************************************************************************************************/