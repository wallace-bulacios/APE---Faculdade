/**
 * Questão Nº 05 - APE-Tarefa-003-1ºSem2023.txt
 * Arquivo: Q05.c
 *
 * Faça um programa C que leia o salário de um funcionário e leia
 * também uma porcentagem de aumento de salário. Em seguida, calcule
 * e imprima o novo salário do funcionário e o valor que o funcionário
 * receberá de aumento.
 *
 * Faculdade: Unigoias
 * Curso: Engenharia de Software
 * Disciplina: APE - Algoritmos e Programação Estruturada
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
   printf("*************** CÁLCULO DE AUMENTO SALARIAL *******************\n");
   printf("***************************************************************\n\n");

   printf("Digite o valor atual do salário: ");
   scanf("%f", &salario);

   printf("\nInforma a porcentagem de aumento do salário: ");
   scanf("%f", &aumentoSalario);

   novoSalario = ((salario * aumentoSalario) / 100) + salario;

   printf("\nO novo salário com aumento %.2f porcento é : R$%.2f\n", aumentoSalario, novoSalario);

   printf("\n***************************************************************\n");
   printf("**************************** FIM ******************************\n");
   printf("***************************************************************\n\n");

   return 0;
}
