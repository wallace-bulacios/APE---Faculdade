#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

int main(void) {
    int idade;
    float salario;
    char nome[50];
    //char vip;
    bool vip;

    setlocale(LC_ALL, "Portuguese");

    /* Caso ocorra ap�s o %s pular os demais scanf incluir o comodo para limpar o buffer do teclado */
    printf("Digite seu nome completo: ");
    //scanf("%s", nome); // l� somente a primeira palavra
    gets(nome); //L� nome completo

    printf("Digite a sua Idade: ");
    scanf("%d", &idade);

    printf("Digite o seu sal�rio: ");
    scanf("%f", &salario);

    setbuf(stdin, 0); //limpa o buffer do teclado

    printf("Vip (s/n): ");
    //scanf("%c", &vip); //usando char para definir vip
    vip = (tolower(getchar()) == 's' ? true : false);
    //vip = tolower(getchar()) == s;

    /** Imprime os dados digitados */
    printf("\n==================================================\n");
    printf("\nNome digitado: %s\n", nome);
    printf("Idade digitada: %d\n", idade);
    printf("Sal�rio digitrado: R$ %.2f\n", salario);
    printf("Vip: %s\n\n", vip ? "Sim " : "N�o");
    printf("==================================================\n");


    return 0;
}
