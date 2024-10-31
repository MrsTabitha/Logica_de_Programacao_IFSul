#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	/* 2.7) Escreva um algoritmo para ler 2 valores (considere que não serão lidos valores iguais) e escreve-los em ordem crescente. */
	
	int numero1, numero2;
	
	printf("Informe o primeiro número: ");
    scanf("%d", &numero1);
    
    printf("Informe o segundo número: ");
    scanf("%d", &numero2);
    
    if(numero1 > numero2){
    	printf("%d %d", numero2, numero1);
	}else{
		printf("Ordem crescente é: %d,%d.", numero1, numero2);
	}
	
}
