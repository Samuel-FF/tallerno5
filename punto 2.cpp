/*
programa: Multiplicar 2 numeros ingresados por el usuario
creador: Samuel Fernandez Fernandez
fecha: 12/09/2018
*/

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
using namespace std;

void mult(float num1,float num2,float x)
{
	x = (num1*num2);
	printf("el resultado de la multiplicacion es: %.1f",x);
	
}


int main()
{
float n1,n2,x;
printf ("ingrese el primer numero a multiplicar: ");	
scanf("%f",&n1);
printf ("ingrese el segundo numero a multiplicar: ");
scanf("%f",&n2);

mult(n1,n2,x);

	return 0;
}

