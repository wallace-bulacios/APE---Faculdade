/**
 * Questão N02 - APE-Tarefa-005-1oSem2023.txt
 * Arquivo: calc-idade.c
 *
 * 01)  Escreva um algoritmo que, dada a idade de um nadador, classifique-o em uma das seguintes categorias:
 *
 *              ---------------------------------------
 *                     Idade              Categoria
 *              ---------------------------------------
 *                5 até 7 anos            Infantil A
 *                8 até 10 anos           Infantil B
 *                11 até 13 anos          Juvenil A
 *                14 até 17 anos          Juvenil B
 *                Maiores de 18 anos      Adulto
 *              ---------------------------------------
 *
 * Faculdade: Unigoias
 * Curso: Engenharia de Software
 * Disciplina: APE - Algoritmos e Programação Estruturada
 * Professor: Sandro Teixeira Carvalho
 *
 * Aluno - Author: Wallace Valeriano Ignacio Bulacios
 *
 * Versão 1.0.
*/

#include <stdio.h>
#include <locale.h>
#include <conio.h>

int main(void){

    int idadeNadador;

    setlocale(LC_ALL, "Portuguese");

    printf("Insira uma idade para o nadador: ");
    scanf("%d", &idadeNadador);

    if(idadeNadador < 5){
        printf("A idade é inválida.\n");
    }else{
        if(idadeNadador >= 5 && idadeNadador <= 7){
            printf("Infantil A");
        }else{
            if(idadeNadador >=8 && idadeNadador <= 10){
                printf("Infantil B");
            }else{
                if(idadeNadador >=11 && idadeNadador <=13){
                    printf("Juvenil A");
                }else{
                    if(idadeNadador >=14 && idadeNadador <=17){
                        printf("Juvenil B");
                    }else{
                        printf("Adulto");
                    }
                }
            }
        }
    }
    return 0;
}
