/*
 ============================================================================
 Name        : tp-calculadora.c
 Author      : Leonel D'agostino
 Division    : A
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"

int main(void) {
	setbuf(stdout,NULL);

	int opcion;
	int num1;
	int num2;
	int sumar;
	int restar;
	int multiplicacion;
	int factorial1;
	int factorial2;
	float dividir;

	do{
		mostrarMenu();
		printf("Ingrese la opcion que quiere realizar: ");
		scanf("%d",&opcion);

		switch(opcion){
			case 1:
				printf("Ingrese 1er numero(A=x): ");
				scanf("%d",&num1);
				break;
			case 2:
				printf("Ingrese 2 numero(B=y): ");
				scanf("%d",&num2);
				break;
			case 3:
				sumar=suma(num1,num2);
				restar=resta(num1,num2);
				dividir=division(num1,num2);
				multiplicacion=multiplicar(num1, num2);
				factorial1=factorialNumeroUno(num1);
				factorial2= factorialNumeroDos(num2);
				break;
			case 4:
				informarResultados(num1,num2,sumar,restar,dividir,multiplicacion,factorial1,factorial2);
				break;

		}


	}while(opcion != 5);

	printf("Gracias por utilizar este programa.");
	return 0;


}
