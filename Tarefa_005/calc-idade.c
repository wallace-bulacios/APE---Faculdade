/**
 * Quest�o N01 - APE-Tarefa-005-1oSem2023.txt
 * Arquivo: calc-idade.c
 *
 * 01)  Escreva um programa em linguagem C que leia o ano de nascimento de uma pessoa, calcule e
 *      imprima a idade atual dessa pessoa.
 *      Utilize o programa em linguagem C anexo para aprender a capturar o ano a partir
 *      do sistema operacional de seu computador.
 *      Como desafio mostrar a idade em anos, meses e dias
 *
 * Faculdade: Unigoias
 * Curso: Engenharia de Software
 * Disciplina: APE - Algoritmos e Programa��o Estruturada
 * Professor: Sandro Teixeira Carvalho
 *
 * Aluno - Author: Wallace Valeriano Ignacio Bulacios
 *
 *
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

int main(void)
{
    /**
     * declara��o das vari�veis utilizadas no codigo para buscar data atual do sistema
     * bem como retirar mes, dia e ano da data.
    */
    char dateStr[9];
    char timeStr[9];
    char anoAtualString[3];
    int anoAtual;

    //Vari�veis utilizadas para armazenar o m�s caputurada da data do sistema.
    char mesAtualString[3];
    int mesAtual;
    char mes[3];
    char mesExtenso[10];

    //Vari�veis utilizadas para armazenar o dia caputurada da data do sistema.
    char diaAtualString[3];
    char dia[3];
    char diaDaSemanaString[14];
    int diaAtual;
    int diaDaSemana;
    int funcaoK;

    //Declara��o das vari�veis que receber� os dados informado pelo usu�rio
    char nome[40];
    int diaNasc;
    int mesNasc;
    int anoNasc;

    //Declara��o das vari�veis para manipular dados inserido pelo usu�rio
    char diaSemanaNascString[14];
    int diaSemanaNasc;
    int funcaoKNasc;

    //Declara��o vari�veis calculo da idade
    int idAnos;
    int idMeses;
    int meses;

    setlocale(LC_ALL, "Portuguese");

    setbuf(stdin, 0);

    // Captura a data e hora do sistema operacional
    _strdate(dateStr);
    _strtime(timeStr);


    // Captura somente o ano da data e atribui para anoAtualString
    anoAtualString[0] = dateStr[6];
    anoAtualString[1] = dateStr[7];
    anoAtualString[2] = '\0';

    // Captura somente o mes da data e atribui para anoAtualString
    mesAtualString[0] = dateStr[1];
    mesAtualString[1] = dateStr[2];
    mesAtualString[2] = '\0';

    // Captura somente o dia da data e atribui para diaAtualString
    diaAtualString[0] = dateStr[3];
    diaAtualString[1] = dateStr[4];
    diaAtualString[2] = '\0';


    // Converte o conte�do de anoAtualString (char) para anoAtual (int)
    //soma 2000 para mostrar o ano corrente completo, pois tras a data baseada em 1900.
    anoAtual = atoi(anoAtualString) + 2000;

    // Converte o conte�do de mesAtualString (char) para mesAtual (int)
    mesAtual = atoi(mesAtualString);

    //mostra o mes com zero a esquerda
    sprintf(mes, "%02d", mesAtual);

    // Converte o conte�do de diaAtualString (char) para diaAtual (int)
    diaAtual = atoi(diaAtualString);

    //mostra o dia com zero a esquerda
    sprintf(dia, "%02d", diaAtual);

    //m�s por extenso
    switch (mesAtual) {
           case 1: strcpy(mesExtenso, "Janeiro"); break;
           case 2: strcpy(mesExtenso, "Fevereiro"); break;
           case 3: strcpy(mesExtenso, "Mar�o"); break;
           case 4: strcpy(mesExtenso, "Abril"); break;
           case 5: strcpy(mesExtenso, "Maio"); break;
           case 6: strcpy(mesExtenso, "Junho"); break;
           case 7: strcpy(mesExtenso, "Julho"); break;
           case 8: strcpy(mesExtenso, "Agosto"); break;
           case 9: strcpy(mesExtenso, "Setembro"); break;
           case 10: strcpy(mesExtenso, "Outubro"); break;
           case 11: strcpy(mesExtenso, "Novembro"); break;
           case 12: strcpy(mesExtenso, "Dezembro"); break;
    }

    /**Inicio bloco calculo do dia da semana de qualquer ano.*/

    funcaoK = (diaAtual + (2 * mesAtual) + ((3*(mesAtual + 1))/5) + anoAtual + (anoAtual / 4) - (anoAtual / 100) + (anoAtual / 400) + 2);
    diaDaSemana = funcaoK % 7;


    switch (diaDaSemana)
    {
        case 0:
            strcpy(diaDaSemanaString, "S�bado");
            break;
        case 1:
            strcpy(diaDaSemanaString, "Domingo");
            break;
        case 2:
            strcpy(diaDaSemanaString, "Segunda-Feira");
            break;
        case 3:
            strcpy(diaDaSemanaString, "Ter�a-feira");
            break;
        case 4:
            strcpy(diaDaSemanaString, "Quarta-feira");
            break;
        case 5:
            strcpy(diaDaSemanaString, "Quinta-feira");
            break;
        case 6:
            strcpy(diaDaSemanaString, "Sexta-feira");
            break;
    }/**Fim bloco buscar dia da semana qualquer ano*/

    printf("\n===================================================================================================================\n");
    printf(" SISTEMA DE CALCULAR IDADE");
    printf("\n====================================================================================================================\n");
    printf("\nEste projeto tem como finalidade da aplica��o do conhecimento adquirido nas aulas ministradas at� a data 24/03/2023.\n");
    printf("Todo o desenvolvimento foi realizado apenas com o conte�do aprendido em aula\n");
    printf("\nHoje � %s %s de %s de %d.\n", diaDaSemanaString, dia, mesExtenso, anoAtual);

    printf("\nInsira os dados solicitados:");
    printf("\n---------------------------\n");
    printf("\nDigite o nome completo: ");
    gets(nome);
    printf("Informa o dia de nascimento: ");
    scanf("%d", &diaNasc);
        if(diaNasc > 31)
           {
               printf("Dia de nacimento inv�lido, programa encerrado.");
               return 0;
           }
    printf("Informe o m�s de nascimento: ");
    scanf("%d", &mesNasc);
        if(mesNasc > 12)
           {
               printf("Mes de nacimento inv�lido, programa encerrado.");
               return 0;
           }

    printf("Informe o ano de nascimento (AAAA): ");
    scanf("%d", &anoNasc);
        if(anoNasc > anoAtual)
           {
               printf("Ano de nacimento inv�lido, programa encerrado.");
               return 0;
           }

    /** Inicio bloco buscar dia semana do nascimento */
    funcaoKNasc = (diaNasc + 2 * mesNasc + ((3*(mesNasc + 1)) / 5) + anoNasc + (anoNasc / 4) - (anoNasc / 100) + (anoNasc / 400) + 2);
    diaSemanaNasc = funcaoKNasc % 7;

    switch (diaSemanaNasc)
    {
        case 0:
            strcpy(diaSemanaNascString, "S�bado");
            break;
        case 1:
            strcpy(diaSemanaNascString, "Domingo");
            break;
        case 2:
            strcpy(diaSemanaNascString, "Segunda-Feira");
            break;
        case 3:
            strcpy(diaSemanaNascString, "Ter�a-feira");
            break;
        case 4:
            strcpy(diaSemanaNascString, "Quarta-feira");
            break;
        case 5:
            strcpy(diaSemanaNascString, "Quinta-feira");
            break;
        case 6:
            strcpy(diaSemanaNascString, "Sexta-feira");
            break;
    }/**Fim bloco buscar dia semana nascimento*/

    printf("\n%s sua data de nascimento � %d/%d/%d voc� nasceu em um(a) %s\n", nome, diaNasc, mesNasc, anoNasc, diaSemanaNascString);


    /** Inicio bloco calculo idade */
    idAnos = anoAtual - anoNasc; /** Calculo idade em anos */
    if (mesAtual < mesNasc || (mesAtual == mesNasc && diaAtual < diaNasc))
    {
        idAnos--;
    }

    meses = mesAtual - mesNasc;/** C�lculo idade em meses */
    if (meses == 0){
        idMeses = meses;
    }else if(meses < 0){
        idMeses = 12 + meses;
    }

    printf("Sua idade �: %d anos, %d meses", idAnos, idMeses);
    printf("\n====================================================================================================================\n");
    return 0;
}
