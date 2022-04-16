
#include "LED.h"
#include "delay.h"


int main(void)
	
{
	
	LED_Init();
	DelayInit();

	
	while(1)
	{
	GPIO_WriteBit(GPIOA,GPIO_Pin_0,Bit_SET);
	DelayMs(100);
	GPIO_WriteBit(GPIOA,GPIO_Pin_0,Bit_RESET);
	DelayMs(100);
	}
	
}


