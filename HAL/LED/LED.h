#ifndef LED_H_
#define LED_H_
#include "../../MCAL/GPIO/GPIO.h"



void LED_init(uint8_t port, uint8_t pin);
void LED_on(uint8_t port, uint8_t pin);
void LED_off(uint8_t port, uint8_t pin);
//void LED_toggle(EN_port ledPort, EN_pin ledPin);


void BUTTON_init(uint8_t port, uint8_t pin);
uint8_t BUTTON_read(uint8_t port, uint8_t pin);

#endif /* LED_H_ */