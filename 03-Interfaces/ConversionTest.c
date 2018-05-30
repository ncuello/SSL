/*  ConversionTest.c
    02-Interfaces & Makefiles
    Grupo 1
    28052018
*/

#include <stdio.h>
#include <assert.h>   
#include "Conversion.h"

typedef enum {false, true} bool;

bool CasiIgual(double, double, double);
void pruebas(void);


int main(){
	pruebas();
}

void pruebas(void){
	assert(CasiIgual(0.0, Celsius(32.0),0.01));
	assert(CasiIgual(280.0, Celsius(536.0),0.01));
	assert(CasiIgual(120.0, Celsius(248.0),0.01));
	assert(CasiIgual(32.0, Fahrenheit(0.0),0.01));
	assert(CasiIgual(536.0, Fahrenheit(280.0),0.01));
	assert(CasiIgual(248.0, Fahrenheit(120.0),0.01));
}

bool CasiIgual(double temperaturaA, double temperaturaB, double rango){
	return ((temperaturaA + rango >= temperaturaB) && (temperaturaA - rango <= temperaturaB));
}
