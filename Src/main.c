
#include<stdint.h>
#include<stdio.h>
#include <stm32f4xx.h>
#include "uart.h"

#define GPIOAEN (1U<<0)//GPIOA Enable
#define GPIOA_5 (1U<<5)//GPIOA Pin 5
#define LED_PIN  GPIOA_5

char key;
static void uart_callback(void);

int main(void){
	RCC->AHB1ENR |= GPIOAEN;
	GPIOA->MODER |= (1U<<10); //MODER Alternate Func
	GPIOA->MODER &= ~(1U<<11);

	uart2_rxtx_intr();
	while(1){
		/*Nothing*/
	}

}
static void uart_callback(void){


	key = USART2-> DR ; //Load to Data Register
	if (key == '1'){
		GPIOA->ODR |= LED_PIN; //Set Output Data Register 1
	}
	else{
		GPIOA->ODR &= ~LED_PIN; //Set Output Data Register 0
	}

}



void USART2_IRQHandler(void){
	/*check if rxne is set*/
	if(USART2->SR & SR_TXE){

		uart_callback();//interrupt service routine

	}

}

