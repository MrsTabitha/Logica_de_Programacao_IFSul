#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main() {
	// Escreva um algoritmo para ler um numero e informar seu antecessor 
	
    int numero, antecessor;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    antecessor = numero - 1;

    
    printf("O antecessor de %d eh %d.\n", numero, antecessor);

    return 0;
}
