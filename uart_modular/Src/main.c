#include<stdio.h>
#include<stdint.h>
#include<stm32g4xx.h>

#define GPIOA_ENABLE 	 (0x01U<<00)
#define PIN5        	 (0x01U<<5)
#define LED_ON      	 PIN5

char reveived;
int main()
{
	//Enable the clock for AHB2 bus
	RCC->AHB2ENR |= GPIOA_ENABLE;


	//Configure Pin 5 of PORTA as the output
	GPIOA->MODER |= (0x01U<<10);
	GPIOA->MODER &= ~(0x01U<<11);

	//uart_tx_init();
	uart_TxRx_init();


	while(1)
	{
		//uart2_write('Y');
		//printf("Hello from STM32...\r\n");
		reveived = uart2_read_data();
		if(reveived == '1')
		{
			GPIOA->ODR |= LED_ON;
		}
		else
		{
			GPIOA->ODR &= ~LED_ON;
			printf("%c\r\n",reveived);
		}

	}
}

