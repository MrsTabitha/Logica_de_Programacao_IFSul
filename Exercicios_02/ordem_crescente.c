#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	/* 2.7) Escreva um algoritmo para ler 2 valores (considere que n�o ser�o lidos valores iguais) e escreve-los em ordem crescente. */
	
	int numero1, numero2;
	
	printf("Informe o primeiro n�mero: ");
    scanf("%d", &numero1);
    
    printf("Informe o segundo n�mero: ");
    scanf("%d", &numero2);
    
    if(numero1 > numero2){
    	printf("%d %d", numero2, numero1);
	}else{
		printf("Ordem crescente �: %d,%d.", numero1, numero2);
	}
	
}
