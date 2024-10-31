#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	/* 2.3) Escreva um algoritmo para ler um valor e escrever se é positivo ou negativo. Considere o valor zero como positivo.*/
	
    int numero;

    printf("Informe um número: ");
    scanf("%d", &numero);
    
    if(numero >= 0){
    	printf("O número %d é positivo.", numero);
	}else{
		printf("O número %d é negativo.", numero);
	}
    
}
