/** Escreva um programa  em lingugem C que leia as duas notas de
um estudante de engenharia de software, calcule e imprima a sua m�dia
aritm�tica. Al�m, o program deve tamb�m imprimir uma mensagem dizendo
se o aluno est� aprovado ou reprovado.
Ob.: m�dia m�nima para aprova��o � 6,0.
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

    printf("\nA primeira nota � %.1f:\n\n" , nota1);
    printf("\nA primeira nota � %.1f:\n\n" , nota1);
    printf("A segunda nota � %.1f:\n\n", nota2);
    printf("A media � %.1f:\n\n", nota2);

    if ( media >= 6) {
        printf("A aluno est� APROVADO!!!\n\n");
    } else {
        printf ("O aluno est� REPROVADO!!!\n\n");
    }

    return 0;
}
