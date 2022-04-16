
#include "LED.h"

void LED_Init(void)
{
	
	
GPIO_InitTypeDef GPIO_InitStruct;
	
RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);
	
GPIO_InitStruct.GPIO_Pin = GPIO_Pin_0;
GPIO_InitStruct.GPIO_Speed = GPIO_Speed_2MHz;
GPIO_InitStruct.GPIO_Mode = GPIO_Mode_Out_PP;
GPIO_Init(GPIOA, &GPIO_InitStruct);

}

