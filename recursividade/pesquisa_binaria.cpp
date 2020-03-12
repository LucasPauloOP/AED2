#include<stdio.h>
#include<stdlib.h>
#define max 8

// Pesquisa binária com recursividade
int pb(int *vet, int inicio, int fim, int x) {
	
	// Acha o meio do array
	int meio = (inicio + fim) /2;
	
	// Caso seja o elemento do meio do vetor
	// seja o msm que o procurado retorna o indice do vetor
	// q  o representa
	if(x == vet[meio])
		return meio;
	
	// Se for menor  chama a função dnv
	// 	porem o fim do array se torna o meio -1
	// para reduzir  a pesquisa.
	else if(x < vet[meio])
		return pb(vet,inicio,meio-1,x);
		
	// Se for maior chaam a função dnv porem
	// o inicio do array se torna o meio + 1
	// de forma a cortar o vetor pela metade.
	else if(x>vet[meio])
		return pb(vet,meio+1,fim,x);
		
	// Verifica se existe este numero no vetor
	else if(meio == 0 && x != vet[meio]) {
		printf("Valor não encontrado no vetor.");
		return 1;
	}

}

int main() {
	// Vetor
	int array[max]={1,2,3,4,5,6,7,8};
	
	// Mostra o número pesquisado
	printf("%d",array[pb(array,0,7,2)]);
}
