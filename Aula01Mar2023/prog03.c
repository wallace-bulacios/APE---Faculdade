#include <stdio.h>
#include <locale.h>
/** Operadores aritméticos **/

int main(void){

    int primNum, segNum, soma;

    setlocale(LC_ALL, "Portuguese");

    printf("Digite um numero inteiro: ");
    scanf("%d", &primNum);

    printf("Digite um segundo numero inteiro: ");
    scanf("%d", &segNum);

    soma = primNum + segNum;

    printf("a soma de %d + %d é igual a %d\n\n", primNum, segNum, soma);

    return 0;
}
