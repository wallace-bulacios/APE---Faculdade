/** Exercício: escreva um programa em linguagem C que leia
               dois números inteiros e imprima o maior número.
               Se os números informados forem iguais o programa
               deve imprimir a mensagem "Os números são iguais".
*/

#include <stdio.h>
#include <locale.h>

int main(void){

    int n1, n2;

    setlocale(LC_ALL, "Portuguese");

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &n1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &n2);

    if (n1 == n2) {
        printf("\nOs números são iguais.\n");
    }
    else {
        if (n1 > n2) {
            printf("\nO maior número é %d\n", n1);
        } else {
            printf("\nO maior número é %d\n", n2);
        }
    }
    return 0;
}
