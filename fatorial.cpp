#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int fatorialSemRecursividade (int num) {
	// decalra variavel que retornara o total somado
	int total=0;
	
	// enquanto o inteiro passado como função o laço repete
	// sempre decrementando e testando se ele é maior que zero
	for(num; num > 0; num--)
	{
		// a cada repetição do lado é realizado uma soma
		total += num;
	}
	
	// retorna o total da soma
	return total;
	
}

int fatorialComRecursividade (int num) {
	// caso o numero passado como parametro seja 1 retorna 1
	if(num == 1)
		return 1;
	
	// se não for ele chama novamente essa função 
	// criando um laço de repetição  semelhante ao da funcao sem recursividade
	// a diferença é q a soma já é realizado durante o retorno da função
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
