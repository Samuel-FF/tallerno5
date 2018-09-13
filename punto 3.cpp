/*
programa: Mostrar numeros del 1 hasta el numero ingresado por el usuario
creador: Samuel Fernandez Fernandez
fecha: 12/09/2018
*/

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>

using namespace std;

void mostrar(int num)
{
		if(num<0)
		{
			printf("Se produjo un error, por favor reintente");
		}
			if(num>0)
			{
				for(int i=1;i<=num;i++)
				{
					printf ("%d \n",i);
				}
			}
}


int main()
{
	int num,i;
	printf("ingrese un numero: ");
	scanf("%d",&num);
	mostrar(num);
	return 0;
}

