/**
 * Quest�o N� 01 - APE-Tarefa-003-1�Sem2023.txt
 * Arquivo: Q02.c
 *
 * Escreva um programa C que leia (significa que o usu�rio deve digitar os n�meros)
 * dois n�meros inteiros, calcule o produto desses dois n�meros e imprima o resultado
 * no video.
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

int main(void) {

   int num1 = 0;
   int num2 = 0;
   int produto = 0;

   setlocale(LC_ALL, "Portuguese");

   printf("***************************************************************\n");
   printf("************* CALCULO DO PRODUTO DE DOIS VALORES **************\n");
   printf("***************************************************************\n\n");

   printf("Digite o primeiro numero: ");
   scanf("%d", &num1);
   printf("\nDigite o segundo numero: ");
   scanf("%d", &num2);

   produto = num1 * num2;

   printf("\nO produto de %d e %d = %d\n", num1, num2, produto);

   printf("\n***************************************************************\n");
   printf("**************************** FIM ******************************\n");
   printf("***************************************************************\n\n");

   return 0;
}
