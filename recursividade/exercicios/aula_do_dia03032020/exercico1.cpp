#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>

// Implemente uma função recursiva que calcula
//a potência na seguinteconfiguração:
//b^e

int potencialComRecursividade (int e,int b) {
	// Caso base
	if(e == 0) {
		return 1;
	}
	else{
		return b * potencialComRecursividade(e-1,b);
	}
}

int main () {
	
	int b, e, result;
	
	printf("Digite um valor para ser a base: ");
	scanf("%d",&b);
	
	printf("Digite um valor para ser a potencia: ");
	scanf("%d",&e);
	
	result = potencialComRecursividade(e,b);
	
	printf("\nCom recursividade: %d",result);
}
