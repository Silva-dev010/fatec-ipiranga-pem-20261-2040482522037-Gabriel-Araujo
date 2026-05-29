/*
=========================================================
FATEC IPIRANGA - CENTRO PAULA SOUZA
Dscplna: PEM - Programacao Estruturada e Modular

Professor: Prof. Verssmo
Aluno: Gabrlel Araujo da Slva
R.A.:  2040482522037

Atvdade:
Fundamentos de Ponteiros em Linguagem C

Exercco 02 - Tamanho de um Ponteiro
=========================================================
*/

#include <stdio.h>

int main() {

    int *pInt;
    float *pFloat;
    double *pDouble;
    char *pChar;

    printf("Tamanho ponteiro int: %zu bytes\n", sizeof(pInt));
    printf("Tamanho ponteiro float: %zu bytes\n", sizeof(pFloat));
    printf("Tamanho ponteiro double: %zu bytes\n", sizeof(pDouble));
    printf("Tamanho ponteiro char: %zu bytes\n", sizeof(pChar));

    

    return 0;
}
