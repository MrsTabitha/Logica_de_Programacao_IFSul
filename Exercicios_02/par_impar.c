#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	/* 2.10) Escreva um algoritmo para ler um n�mero inteiro (considere que ser�o lidos apenas valores positivos e inteiros) e escrever se � par ou impar. */
	
	int numero;
	
	printf("Informe um n�mero: ");
	scanf("%d", &numero);
	
	if(numero % 2 == 0){
		printf("O n�mero %d � PAR.", numero);
	}else{
		printf("O n�mero %d � �MPAR.", numero);
	}
	
}
