#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	/* 2.5) Escreva um algoritmo para ler o ano de nascimento de uma pessoa e escrever uma mensagem que diga se ela poderá ou não votar este ano
	(não é necessário considerar o mês em que ela nasceu). */
	
	int anoNasc, anoAtual, idade;

    anoAtual = 2024;
    
    printf("Informe o seu ano de nascimento: ");
    scanf("%d", &anoNasc);

    idade = anoAtual - anoNasc;

    if (idade >= 16) {
        printf("Você pode votar este ano.\n");
    } else {
        printf("Você ainda não pode votar este ano.\n");
    }

}
