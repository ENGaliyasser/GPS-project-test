#ifndef GPS_H_
#define GPS_H_
#include "../../MCAL/GPIO/GPIO.h"
#include <math.h>
#include <string.h>
#include <stdint.h>
#include <stdlib.h>
#include "../../MCAL/UART/UART.h"
float toRad (float angle);
float toDeg (float angle);
float getDistance (float startLong, float startLat,float endLong,float endLat);
void GPS_read ();
void GPS_format ();

#endif /* GPS_H_ */