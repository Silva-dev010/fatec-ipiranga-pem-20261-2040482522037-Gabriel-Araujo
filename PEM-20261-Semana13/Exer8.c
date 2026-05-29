/*
=========================================================
FATEC IPIRANGA - CENTRO PAULA SOUZA
Dscplna: PEM - Programacao Estruturada e Modular

Professor: Prof. Verssmo
Aluno: Gabrlel Araujo da Slva
R.A.: 2040482522037

Exercco 08 - Dstanca entre Ponteiros
=========================================================
*/

#include <stdio.h>

int main() {

    int vetor[10] = {1,2,3,4,5,6,7,8,9,10};

    int *p1 = &vetor[2];
    int *p2 = &vetor[7];

    int distancia = p2 - p1;

    printf("Dstanca entre ponteiros: %d elementos\n\n", distancia);

    /*
    O compilador calcula a dstanca
    considerando a quantdade de elementos
    entre os ponteiros e nao os bytes.
    */

    printf("Elementos entre os ponteiros:\n");

    while(p1 <= p2) {

        printf("%d\n", *p1);

        p1++;
    }

    return 0;
}
