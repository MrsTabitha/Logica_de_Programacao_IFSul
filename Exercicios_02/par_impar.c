#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	/* 2.10) Escreva um algoritmo para ler um número inteiro (considere que serão lidos apenas valores positivos e inteiros) e escrever se é par ou impar. */
	
	int numero;
	
	printf("Informe um número: ");
	scanf("%d", &numero);
	
	if(numero % 2 == 0){
		printf("O número %d é PAR.", numero);
	}else{
		printf("O número %d é ÍMPAR.", numero);
	}
	
}
