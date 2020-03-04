#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Implemente  uma função recursiva que
multiplica um dado inteiro a por um
inteiro b, usando somas sucessivas
exemplo a=4 b=3 4*3=>3+3+3+3=12*/

int somasSucessivas(int mult,int base) {
	if(mult==0)
	return 0;

	return base + somasSucessivas(mult-1,base);
}

int main() {
    setlocale(LC_ALL,"Portuguese");
	int mult,base;
	printf("Digite um número para ser somado: ");
	scanf("%d",&base);
	printf("Digite quantas vezes será somado: ");
	scanf("%d",&mult);

	printf("O resultado da somasucessiva de %d que foi somado %d vezes é: %d ",base,mult,somasSucessivas(mult,base));

    return 0;
}
