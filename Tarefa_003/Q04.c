/**
 * Quest�o N� 04 - APE-Tarefa-003-1�Sem2023.txt
 * Arquivo: Q04.c
 *
 * Fa�a um programa em C que leia a base e a altura de um tri�ngulo e calcule
 * e imprima a �rea desse tri�ngulo.
 *
 * Faculdade: Unigoias
 * Curso: Engenharia de Software
 * Disciplina: APE - Algoritmos e Programa��o Estruturada
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
   printf("************* C�LCULO DA �REA DE UM TRIANGULO *****************\n");
   printf("***************************************************************\n\n");

   printf("Digite um valor em para a base do tri�ngulo: ");
   scanf("%f", &base);

   printf("\nDigite um valor em cm para a altura do tri�ngulo: ");
   scanf("%f", &altura);

   area = (base * altura) / 2;

   printf("\nA �rea do tri�ngulo � %.2f cm\n\n", area);

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
