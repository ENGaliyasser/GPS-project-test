#include"GPIO.h"
#include "tm4c123gh6pm.h"
#define F 'F'
#define O 'O'
#define I 'I'
#define H 'H'
#define L 'L'
void SystemInit(){}

void GPIO_InitPort(uint8_t port)
{
    // Enable GPIO port clock
    switch(port)
    {
        case 'A':
            SYSCTL_RCGCGPIO_R |= SYSCTL_RCGCGPIO_R0;
            while((SYSCTL_PRGPIO_R & SYSCTL_PRGPIO_R0) == 0);
						GPIO_PORTA_LOCK_R = 0x4C4F434B; 
						GPIO_PORTA_CR_R = 0xFC ;
						GPIO_PORTA_AFSEL_R = 0; 
						GPIO_PORTA_PCTL_R = 0; 
						GPIO_PORTA_AMSEL_R = 0;
						GPIO_PORTA_DEN_R = 0xFF;
            break;
        case 'B':
            SYSCTL_RCGCGPIO_R |= SYSCTL_RCGCGPIO_R1;
            while((SYSCTL_PRGPIO_R & SYSCTL_PRGPIO_R1) == 0);
						GPIO_PORTB_LOCK_R = 0x4C4F434B; 
						GPIO_PORTB_CR_R = 0x3C ;
						GPIO_PORTB_AFSEL_R = 0; 
						GPIO_PORTB_PCTL_R = 0; 
						GPIO_PORTB_AMSEL_R = 0;
						GPIO_PORTB_DEN_R = 0xFF;
            break;
        case 'C':
            SYSCTL_RCGCGPIO_R |= SYSCTL_RCGCGPIO_R2;
            while((SYSCTL_PRGPIO_R & SYSCTL_PRGPIO_R2) == 0);
						GPIO_PORTC_LOCK_R = 0x4C4F434B; 
						GPIO_PORTC_CR_R = 0xFF ;
						GPIO_PORTC_AFSEL_R = 0; 
						GPIO_PORTC_PCTL_R = 0; 
						GPIO_PORTC_AMSEL_R = 0;
						GPIO_PORTC_DEN_R = 0xFF;
            break;
        case 'D':
            SYSCTL_RCGCGPIO_R |= SYSCTL_RCGCGPIO_R3;
            while((SYSCTL_PRGPIO_R & SYSCTL_PRGPIO_R3) == 0);
						GPIO_PORTD_LOCK_R = 0x4C4F434B; 
						GPIO_PORTD_CR_R = 0xCC ;
						GPIO_PORTD_AFSEL_R = 0; 
						GPIO_PORTD_PCTL_R = 0; 
						GPIO_PORTD_AMSEL_R = 0;
						GPIO_PORTD_DEN_R = 0xFF;
            break;
        case 'E':
            SYSCTL_RCGCGPIO_R |= SYSCTL_RCGCGPIO_R4;
            while((SYSCTL_PRGPIO_R & SYSCTL_PRGPIO_R4) == 0);
						GPIO_PORTE_LOCK_R = 0x4C4F434B; 
						GPIO_PORTE_CR_R = 0x3F ;
						GPIO_PORTE_AFSEL_R = 0; 
						GPIO_PORTE_PCTL_R = 0; 
						GPIO_PORTE_AMSEL_R = 0;
						GPIO_PORTE_DEN_R = 0x3F;
            break;
        case 'F':
            SYSCTL_RCGCGPIO_R |= SYSCTL_RCGCGPIO_R5;
            while((SYSCTL_PRGPIO_R & SYSCTL_PRGPIO_R5) == 0);
						GPIO_PORTF_LOCK_R = 0x4C4F434B; 
						GPIO_PORTF_CR_R = 0x1F ;
						GPIO_PORTF_AFSEL_R = 0; 
						GPIO_PORTF_PCTL_R = 0; 
						GPIO_PORTF_AMSEL_R = 0;
						GPIO_PORTF_DEN_R = 0x1F;
            break;
        default:
            break;
    }
}

void GPIO_SetPinDirection(uint8_t port, uint8_t pin, uint8_t direction)
{
    // Set the direction of the specified pin
    switch(port)
    {
        case 'A':
						if(direction == 'I'){
							CLEAR_BIT(GPIO_PORTA_DIR_R,pin);
							SET_BIT(GPIO_PORTA_PUR_R,pin);
						}else if (direction == 'O'){
							SET_BIT(GPIO_PORTA_DIR_R,pin);
						}
            break;
        case 'B':
						if(direction == 'I'){
							CLEAR_BIT(GPIO_PORTB_DIR_R,pin);
							SET_BIT(GPIO_PORTB_PUR_R,pin);
						}else if (direction == 'O'){
							SET_BIT(GPIO_PORTB_DIR_R,pin);
						}
            break;
        case 'C':
						if(direction == 'I'){
							CLEAR_BIT(GPIO_PORTC_DIR_R,pin);
							SET_BIT(GPIO_PORTC_PUR_R,pin);
						}else if (direction == 'O'){
							SET_BIT(GPIO_PORTC_DIR_R,pin);
						}
            break;
        case 'D':
						if(direction == 'I'){
							CLEAR_BIT(GPIO_PORTD_DIR_R,pin);
							SET_BIT(GPIO_PORTD_PUR_R,pin);
						}else if (direction == 'O'){
							SET_BIT(GPIO_PORTD_DIR_R,pin);
						}
            break;
        case 'E':
						if(direction == 'I'){
							CLEAR_BIT(GPIO_PORTE_DIR_R,pin);
							SET_BIT(GPIO_PORTE_PUR_R,pin);
						}else if (direction == 'O'){
							SET_BIT(GPIO_PORTE_DIR_R,pin);
						}
            break;
        case 'F':
						if(direction == 'I'){
							CLEAR_BIT(GPIO_PORTF_DIR_R,pin);
							SET_BIT(GPIO_PORTF_PUR_R,pin);
						}else if (direction == 'O'){
							SET_BIT(GPIO_PORTF_DIR_R,pin);
						}
            break;
        default:
            break;
    }
}

void GPIO_SetPinValue(uint8_t port, uint8_t pin, uint8_t value)
{
    // Set the direction of the specified pin
    switch(port)
    {
        case 'A':
						if(value == 'H'){
							SET_BIT(GPIO_PORTA_DATA_R,pin);
						}else if (value == 'L'){
							CLEAR_BIT(GPIO_PORTA_DATA_R,pin);
						}
            break;
        case 'B':
						if(value == 'H'){
							SET_BIT(GPIO_PORTB_DATA_R,pin);
						}else if (value == 'L'){
							CLEAR_BIT(GPIO_PORTB_DATA_R,pin);;
						}
            break;
        case 'C':
						if(value == 'H'){
							SET_BIT(GPIO_PORTC_DATA_R,pin);
						}else if (value == 'L'){
							CLEAR_BIT(GPIO_PORTC_DATA_R,pin);
						}
            break;
        case 'D':
						if(value == 'H'){
							SET_BIT(GPIO_PORTD_DATA_R,pin);
						}else if (value == 'L'){
							CLEAR_BIT(GPIO_PORTD_DATA_R,pin);
						}
            break;
        case 'E':
						if(value == 'H'){
							SET_BIT(GPIO_PORTE_DATA_R,pin);
						}else if (value == 'L'){
							CLEAR_BIT(GPIO_PORTE_DATA_R,pin);
						}
            break;
        case 'F':
						if(value == 'H'){
							SET_BIT(GPIO_PORTF_DATA_R,pin);
							//GPIO_PORTF_DATA_R |= 0x02;
						}else if (value == 'L'){
							CLEAR_BIT(GPIO_PORTF_DATA_R,pin);
						}
            break;
        default:
            break;
    }
}
void GPIO_SetPortValue(uint8_t port, uint8_t value)
{
		    switch(port)
				{
        case 'A':
							GPIO_PORTA_DATA_R = value;
            break;
        case 'B':
							GPIO_PORTB_DATA_R = value;
            break;
        case 'C':
							GPIO_PORTC_DATA_R = value;
            break;
        case 'D':
							GPIO_PORTD_DATA_R = value;
            break;
        case 'E':
							GPIO_PORTE_DATA_R = value;
            break;
        case 'F':
							GPIO_PORTF_DATA_R = value;
            break;
        default:
            break;
    }
}

uint8_t GPIO_GetPinValue(uint8_t port, uint8_t pin)
{
    // Get the value of the specified pin
		uint8_t value = 0;
	    switch(port)
    {
        case 'A':
							value = READ_BIT(GPIO_PORTA_DATA_R,pin);
            break;
        case 'B':
							value = READ_BIT(GPIO_PORTB_DATA_R,pin);
            break;
        case 'C':
							value = READ_BIT(GPIO_PORTC_DATA_R,pin);
            break;
        case 'D':
							value = READ_BIT(GPIO_PORTD_DATA_R,pin);
            break;
        case 'E':
							value = READ_BIT(GPIO_PORTE_DATA_R,pin);
            break;
        case 'F':
							value = READ_BIT(GPIO_PORTF_DATA_R,pin);
            break;
        default:
            break;
    }
    return value;
}
int main()
{
	GPIO_InitPort('F');
	GPIO_SetPinDirection('F',1,'O');
	GPIO_SetPinDirection('F',0,'I');
	while(1){
		uint8_t x=!GPIO_GetPinValue('F',0);
	if(x){
		GPIO_SetPinValue('F',1,'H');
		//GPIO_PORTF_DATA_R = 0x02;
	}
	else{
		GPIO_SetPinValue('F',1,'L');
	}
	}
}


	