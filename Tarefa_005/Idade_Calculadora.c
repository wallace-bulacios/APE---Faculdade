
/**
 * Questão N01 - APE-Tarefa-005-1oSem2023.txt
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
 * Disciplina: APE - Algoritmos e Programação Estruturada
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
#include <conio.h>

int main(void) {

    int ano, diaNasc, mesNasc, anoNasc, validaData, bissexto;
    char nome[50];

      //Variáveis utilizadas para armazenar o dia caputurada da data do sistema.
    char dateStr[9];
    char timeStr[9];
    char anoAtualString[3];
    char diaAtualString[3];
    char mesAtualString[3];
    char diaDaSemanaString[14];
    char diaAtualFormatado[3];
    char mesAtualFormatado[3];
    char mesExtenso[10];
    char diaSemanaNascString[14];
    int anoAtual;
    int mesAtual;
    int diaAtual;
    int diaDaSemana;
    int calcDiaSemana;
    int calcDiaSemanaNasc;
    int diaSemanaNasc;
    int idAnos;
    int idMeses;
    int idadeDias;
    int qtdMeses;
    int diasDoMes;
    int idDias;

    setlocale(LC_ALL, "Portuguese");
    setbuf(stdin, 0);

   // Captura a data e hora do sistema operacional
    _strdate(dateStr);
   //_strtime(timeStr);


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

    // Converte o conteúdo de mesAtualString (char) para mesAtual (int)
    mesAtual = atoi(mesAtualString);

    //mostra o mes com zero a esquerda
    sprintf(mesAtualFormatado, "%02d", mesAtual);

    // Converte o conteúdo de diaAtualString (char) para diaAtual (int)
    diaAtual = atoi(diaAtualString);

    //mostra o dia com zero a esquerda
    sprintf(diaAtualFormatado, "%02d", diaAtual);

    // Converte o conteúdo de anoAtualString (char) para anoAtual (int)
    //soma 2000 para mostrar o ano corrente completo, pois tras a data baseada em 1900.
    anoAtual = atoi(anoAtualString) + 2000;

    //mês por extenso
    switch (mesAtual) {
           case 1: strcpy(mesExtenso, "Janeiro"); break;
           case 2: strcpy(mesExtenso, "Fevereiro"); break;
           case 3: strcpy(mesExtenso, "Março"); break;
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

    calcDiaSemana = (diaAtual + (2 * mesAtual) + ((3*(mesAtual + 1))/5) + anoAtual + (anoAtual / 4) - (anoAtual / 100) + (anoAtual / 400) + 2);
    diaDaSemana = calcDiaSemana % 7;


    switch (diaDaSemana)
    {
        case 0:
            strcpy(diaDaSemanaString, "Sábado");
            break;
        case 1:
            strcpy(diaDaSemanaString, "Domingo");
            break;
        case 2:
            strcpy(diaDaSemanaString, "Segunda-Feira");
            break;
        case 3:
            strcpy(diaDaSemanaString, "Terï¿½a-feira");
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



    printf("\n=================================================================================\n");
    printf(" SISTEMA DE CALCULAR IDADE");
    printf("\n=================================================================================\n");
    printf("\nHoje é %s %s de %s de %d.\n", diaDaSemanaString, diaAtualFormatado, mesExtenso, anoAtual);
    printf("\nInsira os dados solicitados:");
    printf("\n---------------------------\n");
    printf("\nDigite o nome completo: ");
    gets(nome);

    /**Validação de inserção do ano de nascimento*/
    do{
        printf("Informa o ano de nascimento: ");
        scanf("%d", &anoNasc);
            if(anoNasc > anoAtual){
                validaData = 0;
                printf("\nMês inválido, pressione uma tecla para digitar novamente.\n");
                getch();
            }else{
                validaData = 1;
              }
    } while (validaData == 0);

    /**Validação de inserção do mês de nascimento*/
    do{
        printf("Informa o mês de nascimento: ");
        scanf("%d", &mesNasc);
            if(mesNasc < 1 || mesNasc > 12){
                validaData = 0;
                printf("\nMês inválido, pressione uma tecla para digitar novamente.\n");
                getch();
            }else{
                validaData = 1;
              }
    } while (validaData == 0);

    /**Validação de inserção do dia de nascimento*/
    do{
        printf("Informa o dia de nascimento: ");
        scanf("%d", &diaNasc);
            if(diaNasc < 1 || diaNasc > 31){
                validaData = 0;
                printf("\nDia inválido, pressione uma tecla para digitar novamente.\n");
                getch();
            }
            if(diaNasc == 31 && (mesNasc == 4 || mesNasc == 6 || mesNasc == 9 || mesNasc == 11)){
                validaData = 0;
                printf("\nDia inválido, pressione uma tecla para digitar novamente.\n");
                getch();
            }
            if(diaNasc > 29 && mesNasc == 2 ){
                validaData = 0;
                printf("\nDia inválido, pressione uma tecla para digitar novamente.\n");
                getch();
            }else {
                validaData = 1;
            }
    } while (validaData == 0);

    /** Inicio bloco buscar dia semana do nascimento */
    calcDiaSemanaNasc = (diaNasc + 2 * mesNasc + ((3*(mesNasc + 1)) / 5) + anoNasc + (anoNasc / 4) - (anoNasc / 100) + (anoNasc / 400) + 2);
    diaSemanaNasc = calcDiaSemanaNasc % 7;

    switch (diaSemanaNasc)
    {
        case 0:
            strcpy(diaSemanaNascString, "Sábado");
            break;
        case 1:
            strcpy(diaSemanaNascString, "Domingo");
            break;
        case 2:
            strcpy(diaSemanaNascString, "Segunda-Feira");
            break;
        case 3:
            strcpy(diaSemanaNascString, "Terça-feira");
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

    printf("\n%s sua data de nascimento é %d/%d/%d você nasceu em um(a) %s\n", nome, diaNasc, mesNasc, anoNasc, diaSemanaNascString);

    /** bloco de calculo da idade */

     /** Verifica se ano é bissexto */
    if (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0)){
        bissexto = 1;
    } else {
        bissexto = 0;
    }

    /** Bloco que valida dias no mes de nascimento */

    if(mesNasc == 1 || mesNasc == 3 || mesNasc == 5 || mesNasc == 7 || mesNasc == 8 || mesNasc == 12){
        diasDoMes = 31;
    }else {
        if(mesNasc == 4 || mesNasc == 6 || mesNasc == 9 || mesNasc == 11){
            diasDoMes = 30;
        }else{
            if(bissexto == 1){
                diasDoMes = 29;
            }else{
                diasDoMes = 28;
            }
        }
    }

    idAnos = anoAtual - anoNasc; /** Calculo idade em anos */
    if (mesAtual < mesNasc || (mesAtual == mesNasc && diaAtual < diaNasc))
    {
        idAnos--;
    }

    qtdMeses = mesAtual - mesNasc;/** Cálculo idade em meses */
    if (qtdMeses == 0){
        idMeses = qtdMeses;
    }else if(qtdMeses < 0){
        idMeses = 12 + qtdMeses;
    }

    if(diaNasc == diaAtual){
        idDias = 0;
    }else if(diaNasc < diaAtual){
        idDias = diaAtual - diaNasc;
    }else{
        idDias = diasDoMes + diaAtual - diaNasc;
    }

    printf("Sua idade é: %d anos, %d meses, %d dias",  idAnos, idMeses, idDias );
    printf("\n=================================================================================\n");
    return 0;
}
