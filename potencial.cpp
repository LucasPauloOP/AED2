#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

/*****************
****Passo Recursivo******
Para qualquer valor o somatório será
potencialComRecursividade(N) = 2 * potencialComRecursividade(N-1) 
*/
int potencialComRecursividade (int num) {

	// caso base
	if(num == 1){
		return 2;
	}
	
	else{
		//
		return 2 * potencialComRecursividade(num-1);
	}

}

int main () {
	
	int num, result;
	printf("Digite um valor para ser a potencia: ");
	scanf("%d",&num);
	
	result = potencialComRecursividade(num);
	
	printf("\nCom recursividade: %d",result);
}
