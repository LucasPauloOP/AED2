#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

//---------------Exercicio 1-----------------------------------------------
/*Implemente um algoritmo recursivo que multiplica um dado inteiro "a" por um inteiro "b", usando somas sucessivas. Exemplo:
4 x 3 = 3 + 3 + 3 + 3 = 12*/
//int somatorioComRecursividade (int num, int num2) {
//
//	if(num == 1){
//		return num2;
//	}
//	else{
//		return num2 + somatorioComRecursividade(num-1,num2);
//	}
//
//}
//
//int main () {
//
//	int num, num2, result;
//	printf("Digite um valor para ser multiplicado: ");
//	scanf("%d",&num);
//
//	printf("Digite outro valor para ser multiplicado: ");
//	scanf("%d",&num2);
//
//	result = somatorioComRecursividade(num, num2);
//
//	printf("\nCom recursividade: %d",result);
//}

//---------------Exercicio 2----------------------------------------------------
/*Implemente um algoritmo recursivo que faça uma busca binária em um vetor ordenado.*/

//#include<stdio.h>
//#include<stdlib.h>
//#define max 8
//
//
//int pesquisa-binaria-index(int *vet, int inicio, int fim, int x) {
//
//	int meio = (inicio + fim) /2;
//
//	if(x == vet[meio])
//		return meio;
//
//	else if(x < vet[meio])
//		return pb(vet,inicio,meio-1,x);
//
//	else if(x>vet[meio])
//		return pb(vet,meio+1,fim,x);
//
//	else if(meio == 0 && x != vet[meio]) {
//		printf("Valor n?o encontrado no vetor.");
//		return 1;
//	}
//
//}
//
//int main() {
//	int array[max]={1,2,3,4,5,6,7,8};
//
//	printf("%d",array[pesquisa-binaria(array,0,7,2)]);
//}

//---------------Exercicio 3----------------------------------------------------
/*Implemente um algoritmo recursivo para calcular o somatório de 0 a N.*/

//int somatorio0An (int num, int count) {
//
//	if(count == num){
//		return num;
//	}
//	else{
//		return count + somatorio0An(num,count+1);
//	}
//
//}
//
//int main () {
//
//	int num, num2, result;
//	printf("Digite um valor para ser o ultimo valor a ser somado: ");
//	scanf("%d",&num);
//
//	result = somatorio0An(num, 0);
//
//	printf("\nCom recursividade: %d",result);
//}

//---------------Exercicio 4----------------------------------------------------
/*Implemente um algoritmo recursivo calcule o fatorial de um número.*/

//int fatorialComRecursividade (int num) {
//
//	if(num == 1 || num == 0){
//		return 1;
//	}
//
//	else{
//		return num * fatorialComRecursividade(num-1);
//	}
//
//}
//
//int main () {
//
//	int num, result;
//	printf("Digite um valor para ser fatorado: ");
//	scanf("%d",&num);
//
//	result = fatorialComRecursividade(num);
//
//	printf("\nCom recursividade: %d",result);
//}

//---------------Exercicio 5----------------------------------------------------
/*Implemente um algoritmo recursivo calcule a potência de 2n.*/

//int potencialComRecursividade (int num) {
//	if(num == 0) {
//		return 1;
//	}
//	else{
//		return 2 * potencialComRecursividade(num-1);
//	}
//}
//
//int main () {
//
//	int num, result;
//	printf("Digite um valor para ser a potencia: ");
//	scanf("%d",&num);
//
//	result = potencialComRecursividade(num);
//
//	printf("\nCom recursividade: %d",result);
//}

//---------------Exercicio 6----------------------------------------------------
/*Faça uma função recursiva que calcule e retorne o N-ésimo termo da sequência Fibonacci.
 Alguns números desta sequência são: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89...*/

//int fibonacci (int n) {
//	if(n < 2)
//	{
//		return n;
//	}
//	else{
//		return fibonacci(n-1) + fibonacci(n-2);
//	}
//
//}
//
//int main() {
//	setlocale(LC_ALL,"portuguese");
//
//	int num, result;
//	printf("Digite um valor para ser usado como ponto de parada da sequência fibonacci: ");
//	scanf("%d",&num);
//	printf("\nSequência fibonacci: ");
//	result = fibonacci(num);
//	printf("%d",result);
//
//}

//---------------Exercicio 7----------------------------------------------------
/*Faça uma função recursiva que receba um número inteiro positivo N e imprima todos os 
números naturais de 0 até N em ordem crescente.*/

//int printOrdemCrescente(int n, int count) {
//
//  if(count == n ){
//    printf("%d",n);
//    return 1;
//  }
//
//   printf("%d-",count);
//  return printOrdemCrescente(n, count+1);
//
//}
//
//int main () {
//  int num;
//
//  printf("Digite o numero final da sequencia: ");
//  scanf("%d",&num);
//
//  printOrdemCrescente(num, 0);
//}

//---------------Exercicio 8----------------------------------------------------
/*Faça uma função recursiva que receba um número inteiro positivo N e imprima todos os números naturais de 
0 até N em ordem decrescente.*/

//int printOrdemDecrescente(int count) {
//
//  if(count == 0 ){
//    printf("%d",0);
//    return 1;
//  }
//
//   printf("%d-",count);
//  return printOrdemDecrescente(count-1);
//
//}
//
//int main () {
//  int num;
//
//  printf("Digite o numero inicial da sequencia: ");
//  scanf("%d",&num);
//
//  printOrdemDecrescente(num);
//}

//---------------Exercicio 9----------------------------------------------------
/*O máximo divisor comum dos inteiros x e y é o maior inteiro que é divisível por x e y. 
  Escreva uma função recursiva mdc em C, que retorna o máximo divisor comum de x e y. 
  O mdc de x e y é definido como segue: se y é igual a 0, então mdc(x,y) é x; caso contrário, mdc(x,y) 
  é mdc (y, x%y),onde % é o operador resto.*/

//int mdc(int x,int y) {
//  if(y == 0)
//   return x;
//
//  return mdc(y,x % y);
//}
//
//int main () {
//  setlocale(LC_ALL,"portuguese");
//  int num,num2;
//
//  printf("Digite um numero para descobrir o mdc: ");
//  scanf("%d",&num);
//
//  printf("Digite um numero para descobrir o mdc: ");
//  scanf("%d",&num2);
//
//  printf("\nO máximo divisor comum é: %d",mdc(num,num2));
//}
