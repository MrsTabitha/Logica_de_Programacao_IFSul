#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	/* 2.1) Escreva um algoritmo para ler as notas das duas avalia��es de um aluno no semestre, calcular e escrever a m�dia semestral e a seguinte mensagem: 
	"PARAB�NS! Voc� foi aprovado" somente se o aluno foi aprovado (considere 6.0 a nota m�nima para aprova��o).
	 
	2.2) Acrescente ao exerc�cio acima a mensagem: "Voc� foi REPROVADO! Estude mais" caso a m�dia calculada seja menor que 6,0.*/
	
    float nota1, nota2, media;

    printf("Informe a nota da primeira avalia��o: ");
    scanf("%f", &nota1);
    
    printf("Informe a nota da segunda avalia��o: ");
    scanf("%f", &nota2);
    
    media = (nota1 + nota2) / 2;

    printf("Sua m�dia �: %.2f \n", media);
    
    if(media >= 6){
    	printf("PARAB�NS! Voc� foi aprovado.");
	}else{
		printf("Voc� foi REPROVADO! Estude mais.");
	}
    	
}
