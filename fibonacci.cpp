#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>

int fibonacci (int n) {
	if(n < 2)
	{
		return n;
	}
	else{
		return fibonacci(n-1) + fibonacci(n-2);
	}	

}

int main() {
	setlocale(LC_ALL,"portuguese");
	int num, result;
	printf("Digite um valor para ser usado como ponto de parada da sequência fibonacci: ");
	scanf("%d",&num);
	printf("\nSequência fibonacci: ");
	result = fibonacci(num);
	printf("%d",result);
	
}
