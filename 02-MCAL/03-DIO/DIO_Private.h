/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  DIO_Private.h
 *       Module:  DIO
 *
 *  Description:  <Write File DESCRIPTION here>     
 *  
 *********************************************************************************************************************/
#ifndef DIO_PRIVATE_H
#define DIO_PRIVATE_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
#define GPIOA_BaseAddress 0x40004000
#define GPIOB_BaseAddress 0x40005000
#define GPIOC_BaseAddress 0x40006000
#define GPIOD_BaseAddress 0x40007000
#define GPIOE_BaseAddress 0x40024000
#define GPIOF_BaseAddress 0x40025000

#define GPIOA_DATA  *((volatile u32 *)(GPIOA_BaseAddress))
#define GPIOB_DATA  *((volatile u32 *)(GPIOB_BaseAddress))
#define GPIOC_DATA  *((volatile u32 *)(GPIOC_BaseAddress))
#define GPIOD_DATA  *((volatile u32 *)(GPIOD_BaseAddress))
#define GPIOE_DATA  *((volatile u32 *)(GPIOE_BaseAddress))
#define GPIOF_DATA  *((volatile u32 *)(GPIOF_BaseAddress))
				    
#define GPIOA_DIR   *((volatile u32 *)(GPIOA_BaseAddress+0x400))
#define GPIOB_DIR   *((volatile u32 *)(GPIOB_BaseAddress+0x400))
#define GPIOC_DIR   *((volatile u32 *)(GPIOC_BaseAddress+0x400))
#define GPIOD_DIR   *((volatile u32 *)(GPIOD_BaseAddress+0x400))
#define GPIOE_DIR   *((volatile u32 *)(GPIOE_BaseAddress+0x400))
#define GPIOF_DIR   *((volatile u32 *)(GPIOF_BaseAddress+0x400))
				    
#define GPIOA_DR2R  *((volatile u32 *)(GPIOA_BaseAddress+0x500))
#define GPIOB_DR2R  *((volatile u32 *)(GPIOB_BaseAddress+0x500))
#define GPIOC_DR2R  *((volatile u32 *)(GPIOC_BaseAddress+0x500))
#define GPIOD_DR2R  *((volatile u32 *)(GPIOD_BaseAddress+0x500))
#define GPIOE_DR2R  *((volatile u32 *)(GPIOE_BaseAddress+0x500))
#define GPIOF_DR2R  *((volatile u32 *)(GPIOF_BaseAddress+0x500))
				    
#define GPIOA_DR4R  *((volatile u32 *)(GPIOA_BaseAddress+0x504))
#define GPIOB_DR4R  *((volatile u32 *)(GPIOB_BaseAddress+0x504))
#define GPIOC_DR4R  *((volatile u32 *)(GPIOC_BaseAddress+0x504))
#define GPIOD_DR4R  *((volatile u32 *)(GPIOD_BaseAddress+0x504))
#define GPIOE_DR4R  *((volatile u32 *)(GPIOE_BaseAddress+0x504))
#define GPIOF_DR4R  *((volatile u32 *)(GPIOF_BaseAddress+0x504))
				    
#define GPIOA_DR8R  *((volatile u32 *)(GPIOA_BaseAddress+0x508))
#define GPIOB_DR8R  *((volatile u32 *)(GPIOB_BaseAddress+0x508))
#define GPIOC_DR8R  *((volatile u32 *)(GPIOC_BaseAddress+0x508))
#define GPIOD_DR8R  *((volatile u32 *)(GPIOD_BaseAddress+0x508))
#define GPIOE_DR8R  *((volatile u32 *)(GPIOE_BaseAddress+0x508))
#define GPIOF_DR8R  *((volatile u32 *)(GPIOF_BaseAddress+0x508))
				    
#define GPIOA_ODR   *((volatile u32 *)(GPIOA_BaseAddress+0x50C))
#define GPIOB_ODR   *((volatile u32 *)(GPIOB_BaseAddress+0x50C))
#define GPIOC_ODR   *((volatile u32 *)(GPIOC_BaseAddress+0x50C))
#define GPIOD_ODR   *((volatile u32 *)(GPIOD_BaseAddress+0x50C))
#define GPIOE_ODR   *((volatile u32 *)(GPIOE_BaseAddress+0x50C))
#define GPIOF_ODR   *((volatile u32 *)(GPIOF_BaseAddress+0x50C))
				    
#define GPIOA_PUR   *((volatile u32 *)(GPIOA_BaseAddress+0x510))
#define GPIOB_PUR   *((volatile u32 *)(GPIOB_BaseAddress+0x510))
#define GPIOC_PUR   *((volatile u32 *)(GPIOC_BaseAddress+0x510))
#define GPIOD_PUR   *((volatile u32 *)(GPIOD_BaseAddress+0x510))
#define GPIOE_PUR   *((volatile u32 *)(GPIOE_BaseAddress+0x510))
#define GPIOF_PUR   *((volatile u32 *)(GPIOF_BaseAddress+0x510))
				    
#define GPIOA_PDR   *((volatile u32 *)(GPIOA_BaseAddress+0x514))
#define GPIOB_PDR   *((volatile u32 *)(GPIOB_BaseAddress+0x514))
#define GPIOC_PDR   *((volatile u32 *)(GPIOC_BaseAddress+0x514))
#define GPIOD_PDR   *((volatile u32 *)(GPIOD_BaseAddress+0x514))
#define GPIOE_PDR   *((volatile u32 *)(GPIOE_BaseAddress+0x514))
#define GPIOF_PDR   *((volatile u32 *)(GPIOF_BaseAddress+0x514))
				    
#define GPIOA_DEN   *((volatile u32 *)(GPIOA_BaseAddress+0x51C))
#define GPIOB_DEN   *((volatile u32 *)(GPIOB_BaseAddress+0x51C))
#define GPIOC_DEN   *((volatile u32 *)(GPIOC_BaseAddress+0x51C))
#define GPIOD_DEN   *((volatile u32 *)(GPIOD_BaseAddress+0x51C))
#define GPIOE_DEN   *((volatile u32 *)(GPIOE_BaseAddress+0x51C))
#define GPIOF_DEN   *((volatile u32 *)(GPIOF_BaseAddress+0x51C))

#define GPIOA_AMSEL *((volatile u32 *)(GPIOA_BaseAddress+0x528))
#define GPIOB_AMSEL *((volatile u32 *)(GPIOB_BaseAddress+0x528))
#define GPIOC_AMSEL *((volatile u32 *)(GPIOC_BaseAddress+0x528))
#define GPIOD_AMSEL *((volatile u32 *)(GPIOD_BaseAddress+0x528))
#define GPIOE_AMSEL *((volatile u32 *)(GPIOE_BaseAddress+0x528))
#define GPIOF_AMSEL *((volatile u32 *)(GPIOF_BaseAddress+0x528))
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

#endif  /* DIO_PRIVATE_H */

/**********************************************************************************************************************
 *  END OF FILE: DIO_Private.h
 *********************************************************************************************************************/