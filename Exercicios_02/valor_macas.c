#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	/* 2.6) Cada ma�� custa R$ 0,30 ser forem compradas menos do que uma d�zia, e R$ 0,25 ser forem compradas pelo menos doze. 
	Escreva um algoritmo que leia o n�mero de ma��s compradas, calcule e escreva o valor total da compra. */
	
	int numeroMacas;
	float valorTotal;
	
	printf("Informe o n�mero de ma��s compradas: ");
    scanf("%d", &numeroMacas);
    
    if(numeroMacas >= 12){
    	valorTotal = numeroMacas * 0.25;
	}else{
		valorTotal = numeroMacas * 0.30;
	}
	
	printf("O valor total da compra � R$%.2f reais.",valorTotal);
	
}
