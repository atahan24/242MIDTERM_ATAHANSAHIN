#include <stm32f407xx.h>


int main( )
{
	RCC->AHB1ENR=0x00000002;  //All pinB activated.
	GPIOB->MODER = 0x00000014; // Pin 1 and 2 are set as output

	 GPIOA->OSPEEDR=OXFFFFFFFF;
	 GPIOA->OSPEEDR=OXFFFFFFFF;

}
