/**
Exerc�cio: Escreva um programa em linguagem C que leia
um n�mero inteiro correspondente a um m�s do ano por extenso.

    Solu��o usando estrutura if composta aninhada
*/
#include <stdio.h>
#include <locale.h>


int main (void) {

    int mes;

    setlocale(LC_ALL, "Portuguese");

    printf("Digite o n�mero do m�s do ano: ");
    scanf("%d", &mes);


    if (mes == 1) {
        printf("Janeiro\n");
    }else if (mes == 2) {
        printf("Fevereiro");
    }else if (mes == 3) {
        printf("Mar�o");
    }else if (mes == 4) {
        printf("abril");
    }else if (mes == 5) {
        printf("Maio");
    }else if (mes == 6) {
        printf("Junho");
    }else if (mes == 7) {
        printf("Julho");
    }else if (mes == 8) {
        printf("Agosto");
    }else if (mes == 9) {
        printf("Setembro");
    }else if (mes == 10) {
        printf("Outubro");
    }else if (mes == 11) {
        printf("Novembro");
    }else if (mes == 12) {
        printf("Dezembro");
    }else{
        printf("M�s inv�lido", mes);
    }

    return 0;
}
