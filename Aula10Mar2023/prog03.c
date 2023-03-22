/**
Exerc�cio: Escreva um programa em linguagem C que leia
um n�mero inteiro correspondente a um m�s do ano por extenso.

    Solu��o usando estrutura switch
*/
#include <stdio.h>
#include <locale.h>


int main (void) {

    int mes;

    setlocale(LC_ALL, "Portuguese");

    printf("Digite o n�mero do m�s do ano: ");
    scanf("%d", &mes);


    switch (mes) {
        case 1: printf("Janeiro"); break;
        case 2: printf("Fevereiro"); break;
        case 3: printf("Mar�o"); break;
        case 4: printf("Abril"); break;
        case 5: printf("Maio"); break;
        case 6: printf("Junho"); break;
        case 7: printf("Julho"); break;
        case 8: printf("Agosto"); break;
        case 9: printf("Setembro"); break;
        case 10: printf("Outubro"); break;
        case 11: printf("Novembro"); break;
        case 12: printf("Dezembro"); break;
        default: printf("M�s Inv�lido!");
    }

    return 0;
}
