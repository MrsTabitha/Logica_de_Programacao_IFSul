#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	/* 2.5) Escreva um algoritmo para ler o ano de nascimento de uma pessoa e escrever uma mensagem que diga se ela poder� ou n�o votar este ano
	(n�o � necess�rio considerar o m�s em que ela nasceu). */
	
	int anoNasc, anoAtual, idade;

    anoAtual = 2024;
    
    printf("Informe o seu ano de nascimento: ");
    scanf("%d", &anoNasc);

    idade = anoAtual - anoNasc;

    if (idade >= 16) {
        printf("Voc� pode votar este ano.\n");
    } else {
        printf("Voc� ainda n�o pode votar este ano.\n");
    }

}
