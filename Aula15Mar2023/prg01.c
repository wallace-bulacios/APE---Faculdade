/**
   Exerc�cio:  Escreva um programa em linguagem C que leia
               dois n�meros inteiros e imprima o maior n�mero.
*/
#include <stdio.h>
#include <locale.h>

int main(void){

   int n1, n2;

   setlocale(LC_ALL, "Portuguese");

   printf("Digite o primeiro n�mero inteiro: ");
   scanf("%d", &n1);

   printf("Digite o segundo n�mero inteiro: ");
   scanf("%d", &n2);

   if (n1 > n2) {
      printf("\nO maior n�emro � %d\n", n1);
   }else {
      printf("O maior n�mero � %d\n", n2);
   }

   return 0;
}
