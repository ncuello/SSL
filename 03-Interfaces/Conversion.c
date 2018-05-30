/*  Conversion.c
    02-Interfaces & Makefiles
    Grupo 1
    30052018
*/
#include "Conversion.h"

double Celsius (double fahr) {        /*convierte a Celsius*/
	return ((5.0/9.0) * (fahr - 32));
}
double	Fahrenheit (double celsius){  /*convierte a Fahrenheit*/
	return (celsius * (9.0/5.0) + 32);
}