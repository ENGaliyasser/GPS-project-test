#ifndef GPIO_H_
#define GPIO_H_
#include "../../Utilities/tm4c123gh6pm.h"
#include "../../Utilities/bitManipulation.h"
#include "stdint.h"

/*******************************************************************************
 *                      Preprocessor Macros                                    *
 *******************************************************************************/
 
/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/
void GPIO_InitPort(uint8_t port);
void GPIO_SetPinValue(uint8_t port, uint8_t pin, uint8_t value);
void GPIO_SetPortValue(uint8_t port, uint8_t value);
uint8_t GPIO_GetPinValue(uint8_t port, uint8_t pin);


#endif /* GPIO_H_ */

