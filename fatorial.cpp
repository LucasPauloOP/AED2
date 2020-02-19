#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

/*****************
****Passo Recursivo******
Para qualquer valor o fatorado será
fatorialComRecursividade(N) = N * fatorialComRecursividade(N-1) 
*/

int fatorialComRecursividade (int num) {
	// Caso base
	if(num == 1){
		return 1;
	}
		
	else{
		return num * fatorialComRecursividade(num-1);
	}

}

int main () {
	
	int num, result;
	printf("Digite um valor para ser fatorado: ");
	scanf("%d",&num);
	
	result = fatorialComRecursividade(num);
	
	printf("\nCom recursividade: %d",result);
}
