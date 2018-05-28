/* conversion.c
   Interfaces & Makefile — Temperaturas 
   GRUPO:  
   20180528
*/ 
#include "Conversion.h"


/*Función que recibe Farenheit y lo transforma a Celsius*/
double celsius(double f){
	return (5.0/9.0)*(f-32);
}

/*Función que recibe Celsius y lo transforma a Fahrenheit*/
double fahrenheit(double c){
	return ((9.0/5.0) * c) + 32;
}
