/** Exerc�cio: escreva um programa em linguagem C que leia
               dois n�meros inteiros e imprima o maior n�mero.
               Se os n�meros informados forem iguais o programa
               deve imprimir a mensagem "Os n�meros s�o iguais".
*/

#include <stdio.h>
#include <locale.h>

int main(void){

    int n1, n2;

    setlocale(LC_ALL, "Portuguese");

    printf("Digite o primeiro n�mero inteiro: ");
    scanf("%d", &n1);

    printf("Digite o segundo n�mero inteiro: ");
    scanf("%d", &n2);

    if (n1 == n2) {
        printf("\nOs n�meros s�o iguais.\n");
    }
    else {
        if (n1 > n2) {
            printf("\nO maior n�mero � %d\n", n1);
        } else {
            printf("\nO maior n�mero � %d\n", n2);
        }
    }
    return 0;
}
