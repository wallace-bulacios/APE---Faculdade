#include <stdio.h>
#include <locale.h>

/** Estruturas de decisão

        if.. else
        switch..case

    Escreva um programa em C que leia a idade de uma pessoa
    e imprima uma menssagem se a pessoa pode tirar CNH.
*/

int main (void) {

    int idade;

    setlocale(LC_ALL, "Portuguese");

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    if ( idade >= 18 ) {
        printf("Você tem idade para tirar sua CNH.\n");
    } else {
        printf("Você não pode tirar sua CNH.\n");
    }

    return 0;
}
