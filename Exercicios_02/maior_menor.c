#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	/* 2.4) Escreva um algoritmo para ler 2 valores (considere que não serão informados valores iguais) e escrever a maior deles. */
	
    int numero1, numero2;

    printf("Informe o primeiro número: ");
    scanf("%d", &numero1);
    
    printf("Informe o segundo número: ");
    scanf("%d", &numero2);
    
    if(numero1 > numero2){
    	printf("O número %d é maior que o número %d", numero1, numero2);
	}else{
		printf("O número %d é maior que o número %d", numero2, numero1);
	}
    
}
