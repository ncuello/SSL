/*
    ConversionTest.c
    02-Interfaces & Makefiles
    Grupo 1
    28052018
*/

#include <stdio.h>
#include <assert.h>   
#include "Conversion.h"

char rango(double, double);
void pruebas(void);


int main(){
	pruebas();
}

void pruebas(void){
	assert(rango(0.0, Celsius(32.0)));
	assert(rango(280.0, Celsius(536.0)));
	assert(rango(120.0, Celsius(248.0)));
	assert(rango(32.0, Fahrenheit(0.0)));
	assert(rango(536.0, Fahrenheit(280.0)));
	assert(rango(248.0, Fahrenheit(120.0)));
}

char rango(double temperaturaA, double temperaturaB){
	return ((temperaturaA + 1.0 >= temperaturaB) && (temperaturaA - 1.0 <= temperaturaB));
}
