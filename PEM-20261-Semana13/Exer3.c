/*
=========================================================
FATEC IPIRANGA - CENTRO PAULA SOUZA
Dscplna: PEM - Programacao Estruturada e Modular

Professor: Prof. Verssmo
Aluno: Gabrlel Araujo da Slva
R.A.: 2040482522037

Exercco 03 - Troca de Valores va Referenca
=========================================================
*/

#include <stdio.h>

void trocar(int *a, int *b) {

    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {

    int x = 10;
    int y = 20;

    printf("Antes da troca:\n");
    printf("x = %d\n", x);
    printf("y = %d\n\n", y);

    trocar(&x, &y);

    printf("Depos da troca:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    return 0;
}
