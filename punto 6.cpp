/*
programa: devuelve la cantidad de vocales que tiene una palabra
creador: Samuel Fernandez Fernandez
fecha 12/09/2018
*/
#include <iostream> 
#include <stdio.h> 
#include <conio.h> 
#include <stdlib.h> 

char frase[40]; 
int a,b; 

main(){ 
	
	
	printf("ingrese una frase: "); 
	gets(frase);
	
	
	for(a=0;a<40;a++){ 
		switch (frase[a]){ 
		case 'a': b=b+1; 
		break; 
		case 'e': b=b+1; 
		break; 
		case 'i': b=b+1; 
		break; 
		case 'o': b=b+1; 
		break; 
		case 'u': b=b+1; 
		break; 
		} } 
	
	printf("la cantidad de vocales es %d\n",b); 
	
	getch(); 
	 
	return 0; 
}
