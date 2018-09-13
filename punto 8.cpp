/*
programa: funcion que almacena numeros y los organiza de mayor a menor
creador: Samuel Fernandez Fernandez
fecha 12/09/2018
*/
#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdio.h>
using namespace std;


void num(int num1[], int n){
	printf("Ingrese los numeros: \n");
	for(int i = 0; i < n; i ++){
		scanf("%d", &num1[i]);
	}
}

void mayor(int num1[], int n){
	int temp;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n - 1; j++){
			if( num1[j] < num1[j+1]){
				temp = num1[j];
				num1[j] = num1[j+1];
				num1[j+1] = temp;  
			}	     	
		}
	} 	 
}
void result(int num1[], int n){
	printf("numeros organizados de mayor a menor: \n");
	for(int i = 0; i < n; i++){
		printf("%d\n", num1[i]);
	}
}

int main() {
	int num2[100];
	int tam;
	printf("Ingrese la cantidad de numeros que desea: ");
	scanf("%d", &tam);
	num(num2, tam);
	mayor(num2, tam);
	result(num2, tam);
	
	return 0;
}

