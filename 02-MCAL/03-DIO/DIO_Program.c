


/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  DIO_Program.c
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

#include "DIO_Config.h"
#include "DIO_Interface.h"
#include "DIO_Private.h"

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
void GPIO_VoidPinDir   (u8 copy_u8PortId , u8 copy_u8PinId , PinType *  copy_PinConfig)
{
	switch(copy_u8PortId)
	{
		case GPIO_PORTA :
			CLR_BIT(GPIOA_DIR,copy_u8PinId);
			GPIOA_DIR |= ((copy_PinConfig->Direction)<<copy_u8PinId);
			
			CLR_BIT(GPIOA_PUR,copy_u8PinId);
			GPIOA_PUR |= ((copy_PinConfig->PullUp)   <<copy_u8PinId);
			
			CLR_BIT(GPIOA_PDR,copy_u8PinId);
			GPIOA_PDR |= ((copy_PinConfig->PullDown) <<copy_u8PinId);
			
			CLR_BIT(GPIOA_ODR,copy_u8PinId);
			GPIOA_ODR |= ((copy_PinConfig->OpenDrain)<<copy_u8PinId);
			
			switch (copy_PinConfig->Analog)
			{
				case TRUE  :
					SET_BIT(GPIOA_AMSEL,copy_u8PinId);
					CLR_BIT(GPIOA_DEN  ,copy_u8PinId);
					break;
				
				case FALSE :
					CLR_BIT(GPIOA_AMSEL,copy_u8PinId);
					SET_BIT(GPIOA_DEN  ,copy_u8PinId);
					break;
			}
		
			break;	
	
	
		case GPIO_PORTB :
			CLR_BIT(GPIOB_DIR,copy_u8PinId);
			GPIOB_DIR |= ((copy_PinConfig->Direction)<<copy_u8PinId);
			
			CLR_BIT(GPIOB_PUR,copy_u8PinId);
			GPIOB_PUR |= ((copy_PinConfig->PullUp)   <<copy_u8PinId);
			
			CLR_BIT(GPIOB_PDR,copy_u8PinId);
			GPIOB_PDR |= ((copy_PinConfig->PullDown) <<copy_u8PinId);
			
			CLR_BIT(GPIOB_ODR,copy_u8PinId);
			GPIOB_ODR |= ((copy_PinConfig->OpenDrain)<<copy_u8PinId);
			
			switch (copy_PinConfig->Analog)
			{
				case TRUE  :
					SET_BIT(GPIOB_AMSEL,copy_u8PinId);
					CLR_BIT(GPIOB_DEN  ,copy_u8PinId);
					break;
				
				case FALSE :
					CLR_BIT(GPIOB_AMSEL,copy_u8PinId);
					SET_BIT(GPIOB_DEN  ,copy_u8PinId);
					break;
			}
		
			break;	
			
		case GPIO_PORTC :
			CLR_BIT(GPIOC_DIR,copy_u8PinId);
			GPIOC_DIR |= ((copy_PinConfig->Direction)<<copy_u8PinId);
			
			CLR_BIT(GPIOC_PUR,copy_u8PinId);
			GPIOC_PUR |= ((copy_PinConfig->PullUp)   <<copy_u8PinId);
			
			CLR_BIT(GPIOC_PDR,copy_u8PinId);
			GPIOC_PDR |= ((copy_PinConfig->PullDown) <<copy_u8PinId);
			
			CLR_BIT(GPIOC_ODR,copy_u8PinId);
			GPIOC_ODR |= ((copy_PinConfig->OpenDrain)<<copy_u8PinId);
			
			switch (copy_PinConfig->Analog)
			{
				case TRUE  :
					SET_BIT(GPIOC_AMSEL,copy_u8PinId);
					CLR_BIT(GPIOC_DEN  ,copy_u8PinId);
					break;
				
				case FALSE :
					CLR_BIT(GPIOC_AMSEL,copy_u8PinId);
					SET_BIT(GPIOC_DEN  ,copy_u8PinId);
					break;
			}
		
			break;	
		
		case GPIO_PORTD :
			CLR_BIT(GPIOD_DIR,copy_u8PinId);
			GPIOD_DIR |= ((copy_PinConfig->Direction)<<copy_u8PinId);
			
			CLR_BIT(GPIOD_PUR,copy_u8PinId);
			GPIOD_PUR |= ((copy_PinConfig->PullUp)   <<copy_u8PinId);
			
			CLR_BIT(GPIOD_PDR,copy_u8PinId);
			GPIOD_PDR |= ((copy_PinConfig->PullDown) <<copy_u8PinId);
			
			CLR_BIT(GPIOD_ODR,copy_u8PinId);
			GPIOD_ODR |= ((copy_PinConfig->OpenDrain)<<copy_u8PinId);
			
			switch (copy_PinConfig->Analog)
			{
				case TRUE  :
					SET_BIT(GPIOD_AMSEL,copy_u8PinId);
					CLR_BIT(GPIOD_DEN  ,copy_u8PinId);
					break;
				
				case FALSE :
					CLR_BIT(GPIOD_AMSEL,copy_u8PinId);
					SET_BIT(GPIOD_DEN  ,copy_u8PinId);
					break;
			}
		
			break;	
			
		case GPIO_PORTE :
			CLR_BIT(GPIOE_DIR,copy_u8PinId);
			GPIOE_DIR |= ((copy_PinConfig->Direction)<<copy_u8PinId);
			
			CLR_BIT(GPIOE_PUR,copy_u8PinId);
			GPIOE_PUR |= ((copy_PinConfig->PullUp)   <<copy_u8PinId);
			
			CLR_BIT(GPIOE_PDR,copy_u8PinId);
			GPIOE_PDR |= ((copy_PinConfig->PullDown) <<copy_u8PinId);
			
			CLR_BIT(GPIOE_ODR,copy_u8PinId);
			GPIOE_ODR |= ((copy_PinConfig->OpenDrain)<<copy_u8PinId);
			
			switch (copy_PinConfig->Analog)
			{
				case TRUE  :
					SET_BIT(GPIOB_AMSEL,copy_u8PinId);
					CLR_BIT(GPIOE_DEN  ,copy_u8PinId);
					break;
				
				case FALSE :
					CLR_BIT(GPIOE_AMSEL,copy_u8PinId);
					SET_BIT(GPIOE_DEN  ,copy_u8PinId);
					break;
			}
		
			break;	
		
		case GPIO_PORTF :
			CLR_BIT(GPIOF_DIR,copy_u8PinId);
			GPIOF_DIR |= ((copy_PinConfig->Direction)<<copy_u8PinId);
			
			CLR_BIT(GPIOF_PUR,copy_u8PinId);
			GPIOF_PUR |= ((copy_PinConfig->PullUp)   <<copy_u8PinId);
			
			CLR_BIT(GPIOF_PDR,copy_u8PinId);
			GPIOF_PDR |= ((copy_PinConfig->PullDown) <<copy_u8PinId);
			
			CLR_BIT(GPIOF_ODR,copy_u8PinId);
			GPIOF_ODR |= ((copy_PinConfig->OpenDrain)<<copy_u8PinId);
			
			switch (copy_PinConfig->Analog)
			{
				case TRUE  :
					SET_BIT(GPIOF_AMSEL,copy_u8PinId);
					CLR_BIT(GPIOF_DEN  ,copy_u8PinId);
					break;
				
				case FALSE :
					CLR_BIT(GPIOF_AMSEL,copy_u8PinId);
					SET_BIT(GPIOF_DEN  ,copy_u8PinId);
					break;
			}
		
			break;	
	}
}

void GPIO_VoidPinWrite (u8 copy_u8PortId , u8 copy_u8PinId , u8 copy_u8Value)
{
	u8 local_u8offset = (0b0000000100<<copy_u8PinId);
	switch (copy_u8PortId) 
	{
		case GPIO_PORTA :
			switch (copy_u8Value) 
			{
				case 1 :
					SET_BIT(*((volatile u32 *) (GPIOA_BaseAddress+local_u8offset)),copy_u8PinId);
					break;
				case 0 :
					CLR_BIT(*((volatile u32 *) (GPIOA_BaseAddress+local_u8offset)),copy_u8PinId);
					break;
			}
			break;
		
		case GPIO_PORTB :
			switch (copy_u8Value) 
			{
				case 1 :
					SET_BIT(*((volatile u32 *) (GPIOB_BaseAddress+local_u8offset)),copy_u8PinId);
					break;
				case 0 :
					CLR_BIT(*((volatile u32 *) (GPIOB_BaseAddress+local_u8offset)),copy_u8PinId);
					break;
			}
			break;
		
		case GPIO_PORTC :
			switch (copy_u8Value) 
			{
				case 1 :
					SET_BIT(*((volatile u32 *) (GPIOC_BaseAddress+local_u8offset)),copy_u8PinId);
					break;
				case 0 :
					CLR_BIT(*((volatile u32 *) (GPIOC_BaseAddress+local_u8offset)),copy_u8PinId);
					break;
			}
			break;
		
		case GPIO_PORTD :
			switch (copy_u8Value) 
			{
				case 1 :
					SET_BIT(*((volatile u32 *) (GPIOD_BaseAddress+local_u8offset)),copy_u8PinId);
					break;
				case 0 :
					CLR_BIT(*((volatile u32 *) (GPIOD_BaseAddress+local_u8offset)),copy_u8PinId);
					break;
			}
			break;
		
		case GPIO_PORTE :
			switch (copy_u8Value) 
			{
				case 1 :
					SET_BIT(*((volatile u32 *) (GPIOE_BaseAddress+local_u8offset)),copy_u8PinId);
					break;
				case 0 :
					CLR_BIT(*((volatile u32 *) (GPIOE_BaseAddress+local_u8offset)),copy_u8PinId);
					break;
			}
			break;
		
		case GPIO_PORTF :
			switch (copy_u8Value) 
			{
				case 1 :
					SET_BIT(*((volatile u32 *) (GPIOF_BaseAddress+local_u8offset)),copy_u8PinId);
					break;
				case 0 :
					CLR_BIT(*((volatile u32 *) (GPIOF_BaseAddress+local_u8offset)),copy_u8PinId);
					break;
			}
			break;
	}
}

u8 GPIO_VoidPinRead (u8 copy_u8PortId , u8 copy_u8PinId )
{
	u8 local_u8offset = (0b0000000100<<copy_u8PinId);
	switch (copy_u8PortId) 
	{
		case GPIO_PORTA :
			return GET_BIT(*((volatile u32 *) (GPIOA_BaseAddress+local_u8offset)),copy_u8PinId);
		
		case GPIO_PORTB :
			return GET_BIT(*((volatile u32 *) (GPIOB_BaseAddress+local_u8offset)),copy_u8PinId);
		
		case GPIO_PORTC :
			return GET_BIT(*((volatile u32 *) (GPIOC_BaseAddress+local_u8offset)),copy_u8PinId);
		
		case GPIO_PORTD :
			return GET_BIT(*((volatile u32 *) (GPIOD_BaseAddress+local_u8offset)),copy_u8PinId);
		
		case GPIO_PORTE :
			return GET_BIT(*((volatile u32 *) (GPIOE_BaseAddress+local_u8offset)),copy_u8PinId);
		
		case GPIO_PORTF :
			return GET_BIT(*((volatile u32 *) (GPIOF_BaseAddress+local_u8offset)),copy_u8PinId);
	}
}




/**********************************************************************************************************************
 *  END OF FILE: DIO_Program.c
 *********************************************************************************************************************/