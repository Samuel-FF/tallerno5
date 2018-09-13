/*
Programa: Determinar el mayor de los 3 numeros ingresados por el usuario
creador: Samuel Fernandez Fernandez
fecha: 12/09/2018
*/

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
using namespace std;

void mayor_3_numeros(int num1=0, int num2=0, int num3=0)
{
	if(num1>num2 && num1>num3)
	{
		printf("el numero mayor es: %d",num1);
	}
		if(num2>num1 && num2>num3)
		{
			printf("el numero mayor es: %d",num2);
		}
		if(num3>num1 && num3>num2)
		{
		printf("el numero mayor es: %d",num3);
		}
}
	
	
int main() {
	int resultado=0,n1=0,n2=0,n3=0;
	printf("ingrese un valor: ");
	scanf("%d",&n1);
	printf("ingrese un valor: ");
	scanf("%d",&n2);
	printf("ingrese un valor: ");
	scanf("%d",&n3);
	mayor_3_numeros(n1,n2,n3);
	return 0;
}

