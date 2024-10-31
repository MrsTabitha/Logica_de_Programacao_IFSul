#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	/* 2.8) Escreva um algoritmo que verifique a validade de uma senha fornecida pelo usuário. A senha válida é o número 1234. Devem ser impressas as seguintes mensagens:
	-ACESSO PERMITIDO caso a senha seja válida.
	-ACESSO NEGADO caso a senha seja inválida. */
	
	int senhaValida, senhaInserida;
	
	senhaValida = 1234;
	
	printf("Informe a senha: ");
    scanf("%d", &senhaInserida);
    
    if(senhaInserida == senhaValida){
    	printf("ACESSO PERMITIDO.");
	}else{
		printf("ACESSO NEGADO.");
	}
	
}
