#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int fatorialSemRecursividade (int num) {
	// decalra variavel que retornara o total somado
	int total=0;
	
	// enquanto o inteiro passado como fun��o o la�o repete
	// sempre decrementando e testando se ele � maior que zero
	for(num; num > 0; num--)
	{
		// a cada repeti��o do lado � realizado uma soma
		total += num;
	}
	
	// retorna o total da soma
	return total;
	
}

int fatorialComRecursividade (int num) {
	// caso o numero passado como parametro seja 1 retorna 1
	if(num == 1)
		return 1;
	
	// se n�o for ele chama novamente essa fun��o 
	// criando um la�o de repeti��o  semelhante ao da funcao sem recursividade
	// a diferen�a � q a soma j� � realizado durante o retorno da fun��o
	//*****************************************************************
	// cada uma dessas chamadas vao formando pilhas de chaamdas
	// quando chega no if de cima as chamadas vao retornando
	// e a ultima a retorna fica sendo o primeiro else que entro
	// que retorna todos somados	
	else{
		return num + fatorialComRecursividade(num-1);
	}

	
}

int main () {
	
	printf("Sem recursividade: %d",fatorialSemRecursividade(5));
	
	printf("\nCom recursividade: %d",fatorialComRecursividade(5));
}
