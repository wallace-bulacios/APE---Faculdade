#include <stdio.h>   // para fun��es de entrada e sa�da (printf, scanf etc.)
#include <time.h>    // para fun��es _strdate e _strtime
#include <stdlib.h>  // para fun��o atoi

/** Programa elaborado pelo professor Sandro TC para os
    alunos do curso superior de Engenharia de Software */

int main(void) {
    char dateStr[9];
    char timeStr[9];
    char anoAtualString[3];
    int anoAtual;

    _strdate(dateStr);  // Captura a data do sistema operacional
    printf("Data do sistema operacional: %s\n", dateStr);

    _strtime(timeStr);  // Captura a hora do sistema operacional
    printf("Hora do sistema operacional: %s\n", timeStr);

    // Captura somente o ano da data e atribui para anoAtualString
    anoAtualString[0] = dateStr[6];
    anoAtualString[1] = dateStr[7];
    anoAtualString[2] = '\0';

    // Converte o conte�do de anoAtualString (char) para anoAtual (int)
    anoAtual = atoi(anoAtualString);
    printf("Ano do sistema operacional: %d\n", anoAtual);

    

    return(0);
}
