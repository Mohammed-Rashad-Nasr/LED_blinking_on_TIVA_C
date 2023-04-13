#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "MCU_Interface.h"
#include "DIO_Interface.h"
#include "NVIC_Interface.h"
#include "SYSTICK_Interface.h"


PinType Pin1 ;
PinType SW1 ;
PinType SW2 ;

u16 ON  =0 ; //ON  delay time in ms
u16 OFF =0 ; //OFF delay time in ms

void voidDelay (u32 copy_u32delay);

int main () 
{
	MCU_VoidClockInit();
	STK_voidInit();

	MCU_VoidGPIOEnable(MCU_PORTF);
	
	Pin1.Direction = GPIO_OUTPUT ;
	Pin1.Analog    = FALSE       ;
	Pin1.PullDown  = FALSE       ;
	Pin1.PullUp    = FALSE       ;
	Pin1.OpenDrain = FALSE       ;
	SW1.Direction = GPIO_INPUT ;
	SW1.Analog    = FALSE       ;
	SW1.PullDown  = FALSE       ;
	SW1.PullUp    = FALSE       ;
	SW1.OpenDrain = FALSE       ;
	SW2.Direction = GPIO_INPUT ;
	SW2.Analog    = FALSE       ;
	SW2.PullDown  = FALSE       ;
	SW2.PullUp    = FALSE       ;
	SW2.OpenDrain = FALSE       ;
	
	GPIO_VoidPinDir(GPIO_PORTF,1,&Pin1);
	GPIO_VoidPinDir(GPIO_PORTF,0,&SW1);
	GPIO_VoidPinDir(GPIO_PORTF,4,&SW2);
	u8  CurrentState = GPIO_VoidPinRead(GPIO_PORTF,0);
	u8  PrevState    = GPIO_VoidPinRead(GPIO_PORTF,0);
	u8 flag = 0 ;
	while(1)
	{
		CurrentState = GPIO_VoidPinRead(GPIO_PORTF,0);
		if(CurrentState!=PrevState){
			PrevState = CurrentState;
			if (!GPIO_VoidPinRead(GPIO_PORTF,0)){
						
			switch (flag) {
				case 0 :
					flag++;
					break;
				case 1 :
					flag++;
				  break;
				case 2 :
					flag++;
				  break;
				case 3 :
					flag=1;
				  break;
					
			}
			
		}
		}
		while(!GPIO_VoidPinRead(GPIO_PORTF,0)){
			switch (flag) {
				case 0 :
					break;
				case 1 :
					if (!GPIO_VoidPinRead(GPIO_PORTF,4)){
						ON+=1000;
						STK_VoidDelayms(500);
					}
				  break;
				case 2 :
					if (!GPIO_VoidPinRead(GPIO_PORTF,4)){
						OFF+=1000;
						STK_VoidDelayms(500);
					}
				  break;
				case 3 :
					GPIO_VoidPinWrite(GPIO_PORTF,1,1);
					voidDelay(ON);
					GPIO_VoidPinWrite(GPIO_PORTF,1,0);
					voidDelay(OFF);
				  break;
					
			}
		}
		
		
		
	}
	return 0 ;
}
void voidDelay (u32 copy_u32delay){
	u32 local_u32remaining = copy_u32delay ;
	u8  local_u8iterator = local_u32remaining/1000 ;
	
	while (local_u32remaining) {
		local_u8iterator = local_u32remaining/1000 ;
		if ((local_u32remaining%1000)==0){
			STK_VoidDelayms(1000);
			local_u32remaining -= 1000 ;
		}
		else{
			STK_VoidDelayms(local_u32remaining%(1000*local_u8iterator));
			local_u32remaining -= (local_u32remaining%(1000*local_u8iterator)) ;
		}
		
	}
}
