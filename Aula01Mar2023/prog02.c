#include <stdio.h>

/** Operadores Artimeticos **/

int main (void) {

    int x;

    x = 5 + 2;
    printf("%d\n", x);

    x = 5 - 2;
    printf("%d\n", x);

    x = 5 * 2;
    printf("%d\n", x);

    x = 5 / 2; /** O operdor / promove uma p�rda de dados **/
    printf("%d\n", x);

    /** CAST - CAsting ou Coers�o explicita ou promo��o de argumentos **/
    x = (float)5 / 2; /** O operado **/
    printf("%d\n", x);



    return 0;


}
