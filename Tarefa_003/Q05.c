/**
 * Quest�o N� 05 - APE-Tarefa-003-1�Sem2023.txt
 * Arquivo: Q05.c
 *
 * Fa�a um programa C que leia o sal�rio de um funcion�rio e leia
 * tamb�m uma porcentagem de aumento de sal�rio. Em seguida, calcule
 * e imprima o novo sal�rio do funcion�rio e o valor que o funcion�rio
 * receber� de aumento.
 *
 * Faculdade: Unigoias
 * Curso: Engenharia de Software
 * Disciplina: APE - Algoritmos e Programa��o Estruturada
 * Professor: SAndro Teixeira Carvalho
 *
 * Aluno - Author: Wallace Valeriano Ignacio Bulacios
 *
*/

#include <stdio.h>
#include <locale.h>

int main(void){

   float salario = 0, aumentoSalario = 0, novoSalario = 0;

   setlocale(LC_ALL, "Portuguese");

   printf("***************************************************************\n");
   printf("*************** C�LCULO DE AUMENTO SALARIAL *******************\n");
   printf("***************************************************************\n\n");

   printf("Digite o valor atual do sal�rio: ");
   scanf("%f", &salario);

   printf("\nInforma a porcentagem de aumento do sal�rio: ");
   scanf("%f", &aumentoSalario);

   novoSalario = ((salario * aumentoSalario) / 100) + salario;

   printf("\nO novo sal�rio com aumento %.2f porcento � : R$%.2f\n", aumentoSalario, novoSalario);

   printf("\n***************************************************************\n");
   printf("**************************** FIM ******************************\n");
   printf("***************************************************************\n\n");

   return 0;
}
