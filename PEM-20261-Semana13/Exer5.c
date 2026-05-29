/*
=========================================================
FATEC IPIRANGA - CENTRO PAULA SOUZA
Dscplna: PEM - Programacao Estruturada e Modular

Professor: Prof. Verssmo
Aluno: Gabrlel Araujo da Slva
R.A.: 2040482522037

Exercco 05 - Modfcacao Indreta
=========================================================
*/

#include <stdio.h>

int main() {

    int vetor[5] = {2, 4, 6, 8, 10};

    int *p = vetor;

    printf("Vetor antes:\n");

    for(int i = 0; i < 5; i++) {
        printf("%d ", *(p + i));
    }

    printf("\n");

    for(int i = 0; i < 5; i++) {
        *(p + i) = *(p + i) * 2;
    }

    printf("Vetor depos:\n");

    for(int i = 0; i < 5; i++) {
        printf("%d ", *(p + i));
    }

    return 0;
}
