#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main() {
	/*Escreva um algoritmo para ler duas notas e informar a media*/
	
    float nota1, nota2, media;

    printf("Informe a primeira nota: ");
    scanf("%f", &nota1);
    
    printf("Informe a segunda nota: ");
    scanf("%f", &nota2);
    
    media = (nota1 + nota2) / 2;

    printf("A media eh  %.2f \n",media);

    return 0;
}
