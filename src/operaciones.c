
#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"

int suma(int numero1,int numero2){
	int suma;

	suma= numero1 + numero2;

	return suma;
}
int resta(int numero1, int numero2){
	int resta;

	resta = numero1 - numero2;

	return resta;
}
float division(int numero1, int numero2){
	float division;

	division = (float)numero1 / numero2;

	return division;
}
int multiplicar(int numero1, int numero2){
	int multi;

	multi = numero1 * numero2;

	return multi;
}
int factorialNumeroUno(int numero1){
	int factoreo = 1;

	    for (int i = 1; i < numero1 + 1; i++) {
	        factoreo *= i;
	    }

	    return factoreo;
}
int factorialNumeroDos(int numero2){
	int factoreo = 1;

		    for (int i = 1; i < numero2 + 1; i++) {
		        factoreo *= i;
		    }

		    return factoreo;
}
void informarResultados(int n1,int n2,int rSuma,int rResta,float rDivision,int rMultiplicar,int factNum1,int factNum2){
	printf("Los resultado de las operaciones solicitadas son: \n");
	printf("El resultado de %d + %d es: %d \n",n1,n2,rSuma);
	printf("El resultado de %d - %d es: %d \n",n1,n2,rResta);
	if(n2==0){
		printf("La division no se puede realizar");
	}
	else{
		printf("El resultado de %d / %d es: %.3f \n",n1,n2,rDivision);
	}
	printf("El resultado de %d * %d es: %d \n",n1,n2,rMultiplicar);
	printf("El factorial de %d es de: %d \n",n1,factNum1);
	printf("El factorial de %d es de: %d \n",n2,factNum2);
}
void mostrarMenu(void){

	printf("1. Ingresar 1er operando (A=x) \n"
			"2. Ingresar 2do operando (B=y)\n"
			"3. Calcular todas las operaciones\n"
			"  	a)Calcular la suma (A+B)\n"
			"  	b)Calcular la resta(A-B)\n"
			"  	c)Calcular la division(A/B)\n"
			"  	d)Calcular la multiplicacion(A*B)\n"
			"  	e)Calcular el factorial(A!)\n"
			"4. Informar resultados\n"
			"5. Salir\n");
}


