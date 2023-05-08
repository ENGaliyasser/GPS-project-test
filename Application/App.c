#include "APP.h"
void SystemInit(){}
int main() {
GPIO_InitPort('B');
GPIO_InitPort('E');
GPIO_InitPort('F');
LCD_init();
UART_Init( 1 , 9600 );


	while(1){
		char x = UART_CharRX(1);
		UART_CharTX(1 , x);
		
	}
		

}