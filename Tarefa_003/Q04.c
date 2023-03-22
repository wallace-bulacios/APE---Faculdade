/**
 * Questão Nº 04 - APE-Tarefa-003-1ºSem2023.txt
 * Arquivo: Q04.c
 *
 * Faça um programa em C que leia a base e a altura de um triângulo e calcule
 * e imprima a área desse triângulo.
 *
 * Faculdade: Unigoias
 * Curso: Engenharia de Software
 * Disciplina: APE - Algoritmos e Programação Estruturada
 * Professor: Sandro Teixeira Carvalho
 *
 * Aluno - Author: Wallace Valeriano Ignacio Bulacios
 *
*/

#include <stdio.h>
#include <locale.h>

int main(void){

   float base = 0, altura = 0;
   float area = 0;

   setlocale(LC_ALL, "Portuguese");

   printf("***************************************************************\n");
   printf("************* CÁLCULO DA ÁREA DE UM TRIANGULO *****************\n");
   printf("***************************************************************\n\n");

   printf("Digite um valor em para a base do triângulo: ");
   scanf("%f", &base);

   printf("\nDigite um valor em cm para a altura do triângulo: ");
   scanf("%f", &altura);

   area = (base * altura) / 2;

   printf("\nA área do triângulo é %.2f cm\n\n", area);

   printf("\n           |        |          ");
   printf("\n          | |       |          ");
   printf("\n         |   |      | altura ");
   printf("\n        |     |     |          ");
   printf("\n       |       |    |           area = (base x altura)/2");
   printf("\n      |         |   |          ");
   printf("\n     |           |  |          ");
   printf("\n     -------------  |          ");
   printf("\n         base                  \n");

   printf("\n***************************************************************\n");
   printf("**************************** FIM ******************************\n");
   printf("***************************************************************\n\n");

   return 0;
}
