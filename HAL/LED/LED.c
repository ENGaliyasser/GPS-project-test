#include "LED.h"
void LED_init(uint8_t port, uint8_t pin){
	GPIO_InitPort(port);
	GPIO_SetPinDirection(port, pin, 'I');
}
void LED_on(uint8_t port, uint8_t pin){
	GPIO_SetPinValue(port, pin, 'H');
}
void LED_off(uint8_t port, uint8_t pin){
	GPIO_SetPinValue(port, pin, 'L');
}
//void LED_toggle(uint8_t port, uint8_t pin){
//	DIO_toggle(port,pin);
//}
void BUTTON_init(uint8_t port, uint8_t pin){
	GPIO_InitPort(port);
	GPIO_SetPinDirection(port, pin, 'O');
}
uint8_t BUTTON_read(uint8_t port, uint8_t pin){
	return GPIO_GetPinValue(port, pin);
}