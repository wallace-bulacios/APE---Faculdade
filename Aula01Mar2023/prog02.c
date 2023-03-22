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

    x = 5 / 2; /** O operdor / promove uma pérda de dados **/
    printf("%d\n", x);

    /** CAST - CAsting ou Coersão explicita ou promoção de argumentos **/
    x = (float)5 / 2; /** O operado **/
    printf("%d\n", x);



    return 0;


}
