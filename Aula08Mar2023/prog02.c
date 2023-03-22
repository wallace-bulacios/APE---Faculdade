/** Escreva um programa  em lingugem C que leia as duas notas de
um estudante de engenharia de software, calcule e imprima a sua média
aritmética. Além, o program deve também imprimir uma mensagem dizendo
se o aluno está aprovado ou reprovado.
Ob.: média mínima para aprovação é 6,0.
*/

#include <stdio.h>
#include <locale.h>

int main(void) {

    float nota1, nota2, media;


    setlocale(LC_ALL,"Portuguese");

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    media = ( nota1 + nota2 ) / 2;

    printf("\nA primeira nota é %.1f:\n\n" , nota1);
    printf("\nA primeira nota é %.1f:\n\n" , nota1);
    printf("A segunda nota é %.1f:\n\n", nota2);
    printf("A media é %.1f:\n\n", nota2);

    if ( media >= 6) {
        printf("A aluno está APROVADO!!!\n\n");
    } else {
        printf ("O aluno está REPROVADO!!!\n\n");
    }

    return 0;
}
