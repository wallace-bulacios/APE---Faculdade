/**
Exerc�cio: Escreva um programa em linguagem C que leia
um n�mero inteiro correspondente a um m�s do ano por extenso.

    Solu��o usando estrutura if simples
*/
#include <stdio.h>
#include <locale.h>


int main (void) {

    int mes;

    setlocale(LC_ALL, "Portuguese");

    printf("Digite o n�mero do m�s do ano: ");
    scanf("%d", &mes);


    if (mes == 1) {
        printf("Janeiro\n", mes);
    }

    if (mes == 2) {
        printf("Fevereiro\n", mes);
    }

    if (mes == 3) {
        printf("Mar�o\n", mes);
    }

    if (mes == 4) {
        printf("Abril\n", mes);
    }

    if (mes == 5) {
        printf("Maio\n", mes);
    }

    if (mes == 6) {
        printf("Junho\n", mes);
    }

    if (mes == 7) {
        printf("Julho\n", mes);
    }

    if (mes == 8) {
        printf("Agosto\n", mes);
    }

    if (mes == 9) {
        printf("Setembro\n", mes);
    }

    if (mes == 10) {
        printf("Outubro\n", mes);
    }

    if (mes == 11) {
        printf("Novembro\n", mes);
    }

    if (mes == 12) {
        printf("Dezembro\n", mes);
    }

    if (mes < 1 || mes > 12) {
        printf("Mes inv�lido\n", mes);
    }

    return 0;
}
