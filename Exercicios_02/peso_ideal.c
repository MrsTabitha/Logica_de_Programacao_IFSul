#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	/* 2.9) Tendo como entrada a altura e o sexo (codificado da seguinte forma: 1: feminino 2: masculino (considere que ser�o informados apenas c�digos v�lidos) 
	de uma pessoa, construa um algoritmo que calcule e imprima seu peso ideal, utilizando as seguintes f�rmulas: 
	homens: (72.7 * h) - 58   
	mulher: (62.1 * h) - 44.7 */
	
	int sexo;
	float altura, pesoIdeal;
	
	printf("Informe seu sexo em 1:Feminino 2:Masculino : ");
    scanf("%d", &sexo);
    
    printf("Informe sua altura: ");
    scanf("%f", &altura);
    
    if(sexo == 1){
    	pesoIdeal = (62.1 * altura) - 44.7;
	}else{
		pesoIdeal = (72.7 * altura) - 58;
	}
	
	printf("Seu peso ideal �: %.0f kilos.", pesoIdeal);

}
