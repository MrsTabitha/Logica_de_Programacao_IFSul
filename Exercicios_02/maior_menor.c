#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	/* 2.4) Escreva um algoritmo para ler 2 valores (considere que n�o ser�o informados valores iguais) e escrever a maior deles. */
	
    int numero1, numero2;

    printf("Informe o primeiro n�mero: ");
    scanf("%d", &numero1);
    
    printf("Informe o segundo n�mero: ");
    scanf("%d", &numero2);
    
    if(numero1 > numero2){
    	printf("O n�mero %d � maior que o n�mero %d", numero1, numero2);
	}else{
		printf("O n�mero %d � maior que o n�mero %d", numero2, numero1);
	}
    
}
