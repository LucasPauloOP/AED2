#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

/*****************
****Passo Recursivo******
Para qualquer valor o somat�rio ser�
fatorialComRecursividade(N) = N + fatorialComRecursividade(N-1) 
*/

int somatorioComRecursividade (int num) {
	// Caso o numero passado como parametro seja 1 retorna 1(Caso base)
	if(num == 1){
		return 1;
	}
	
	// Se n�o for ele chama novamente essa fun��o 
	// criando um la�o de repeti��o  semelhante ao da funcao sem recursividade
	// a diferen�a � q a soma j� � realizado durante o retorno da fun��o
	//*****************************************************************
	// Cada uma dessas chamadas vao formando pilhas de chaamdas
	// quando chega no if de cima as chamadas vao retornando
	// e a ultima a retorna fica sendo o primeiro else que entro
	// que retorna todos somados	
	else{
		return num + fatorialComRecursividade(num-1);
	}

}

int main () {
	
	int num, result;
	printf("Digite um valor para ser somado: ");
	scanf("%d",&num);
	
	result = fatorialComRecursividade(num);
	
	printf("\nCom recursividade: %d",result);
}
