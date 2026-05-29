/*
=========================================================
FATEC IPIRANGA - CENTRO PAULA SOUZA
Dscplna: PEM - Programacao Estruturada e Modular

Professor: Prof. Verssmo
Aluno: Gabrlel Araujo da Slva
R.A.:  204048252203

Atvdade:
Fundamentos de Ponteiros em Linguagem C

Exercco 01 - Endereco na Memorla
=========================================================
*/

#include <stdio.h>

int main() {

    int numero = 10;
    float decimal = 5.5;
    char letra = 'A';

    int *pNumero = &numero;
    float *pDecimal = &decimal;
    char *pLetra = &letra;

    printf("===== VARIAVEL INT =====\n");
    printf("Valor da varavel: %d\n", numero);
    printf("Endereco da varavel: %p\n", &numero);
    printf("Endereco armazenado no ponteiro: %p\n", pNumero);
    printf("Valor obtido pelo ponteiro: %d\n\n", *pNumero);

    printf("===== VARIAVEL FLOAT =====\n");
    printf("Valor da varavel: %.2f\n", decimal);
    printf("Endereco da varavel: %p\n", &decimal);
    printf("Endereco armazenado no ponteiro: %p\n", pDecimal);
    printf("Valor obtido pelo ponteiro: %.2f\n\n", *pDecimal);

    printf("===== VARIAVEL CHAR =====\n");
    printf("Valor da varavel: %c\n", letra);
    printf("Endereco da varavel: %p\n", &letra);
    printf("Endereco armazenado no ponteiro: %p\n", pLetra);
    printf("Valor obtido pelo ponteiro: %c\n", *pLetra);

    return 0;
}
