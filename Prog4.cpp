/*Autor: Ricardo Jafet Granados Chable, Realizado: 03/02/2022
	Cuarto programa en C: Calculo del area de un circulo
	*/
	
#include<stdio.h>
#include<math.h>

int main() {
	// Declaracion 
	float r, a;
	// Entrada de datos
	printf("Introduce el radio del circulo: ");
	scanf("%f",&r);
	// Proceso
	a =M_PI*pow(r,2);
	printf("El area del circulo es: %f", a);
	return 0;
}
