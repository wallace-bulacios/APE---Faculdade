#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
/**
   Inicializa��o de vari�veis
*/

int main(void){
    int idade;
    float precoVenda;
    bool clienteDevedor;

    idade = 3;
    precoVenda = 3.25;
    clienteDevedor = true;

    setlocale(LC_aLL, "Portuguese");

    printf("A sua idade e %d\n", idade);
    printf("O pre�o de venda e %.2f", precoVenda);

    return 0;
}
