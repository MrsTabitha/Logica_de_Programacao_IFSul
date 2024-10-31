#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	/* 2.1) Escreva um algoritmo para ler as notas das duas avaliações de um aluno no semestre, calcular e escrever a média semestral e a seguinte mensagem: 
	"PARABÉNS! Você foi aprovado" somente se o aluno foi aprovado (considere 6.0 a nota mínima para aprovação).
	 
	2.2) Acrescente ao exercício acima a mensagem: "Você foi REPROVADO! Estude mais" caso a média calculada seja menor que 6,0.*/
	
    float nota1, nota2, media;

    printf("Informe a nota da primeira avaliação: ");
    scanf("%f", &nota1);
    
    printf("Informe a nota da segunda avaliação: ");
    scanf("%f", &nota2);
    
    media = (nota1 + nota2) / 2;

    printf("Sua média é: %.2f \n", media);
    
    if(media >= 6){
    	printf("PARABÉNS! Você foi aprovado.");
	}else{
		printf("Você foi REPROVADO! Estude mais.");
	}
    	
}
