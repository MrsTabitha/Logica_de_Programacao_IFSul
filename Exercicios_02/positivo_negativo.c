#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	/* 2.3) Escreva um algoritmo para ler um valor e escrever se � positivo ou negativo. Considere o valor zero como positivo.*/
	
    int numero;

    printf("Informe um n�mero: ");
    scanf("%d", &numero);
    
    if(numero >= 0){
    	printf("O n�mero %d � positivo.", numero);
	}else{
		printf("O n�mero %d � negativo.", numero);
	}
    
}
