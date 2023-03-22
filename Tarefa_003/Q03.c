/**
 * Questão Nº 03 - APE-Tarefa-003-1ºSem2023.txt
 * Arquivo: Q03.c
 *
 * Escreva um programa em linguagem C que leia/receba (obtenha do usuário pelo teclado) o valor das três
 * notas de um aluno, calcule a média aritmética simples dessas notas e imprima a média do aluno.
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

int main(void) {

   float nota1 = 0, nota2 = 0, nota3 = 0, media = 0;

   setlocale(LC_ALL, "Portuguese");

   printf("***************************************************************\n");
   printf("************* CÁLCULO DA MEDIA DE UM ALUNO ********************\n");
   printf("***************************************************************\n\n");

   printf("Digite a primeira nota do aluno: ");
   scanf("%f", &nota1);

   printf("\nDigite a segunda nota do aluno: ");
   scanf("%f", &nota2);

   printf("\nDigite a terceira nota do aluno: ");
   scanf("%f", &nota3);

   media = (nota1 + nota2 + nota3)/3;

   printf("\nA média do aluno é %f\n" ,media);

   printf("\n***************************************************************\n");
   printf("**************************** FIM ******************************\n");
   printf("***************************************************************\n\n");

   return 0;
}
