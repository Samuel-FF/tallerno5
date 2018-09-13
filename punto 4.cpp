/*
programa: Determinar si es una vocal o no
creador: Samuel Fernandez Fernandez
fecha: 12/09/2018
*/

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>

using namespace std;

void vocal(char c)
{
	if (c=='a'||c=='A'||c=='E'||c=='e'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')
	{
		printf ("es una vocal");
	}
	else{
		printf("no es una vocal");
	}
}

int main() 
{
char c;
printf ("ingrese una letra: ");
scanf ("%c",&c);
vocal(c);
	
	return 0;
}

