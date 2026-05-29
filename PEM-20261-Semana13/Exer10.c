/*
=========================================================
FATEC IPIRANGA - CENTRO PAULA SOUZA
Dscplna: PEM - Programacao Estruturada e Modular

Professor: Prof. Verssmo
Aluno: Gabriel Araujo da Slva
R.A.: 2040482522037

Exercco 10 - Busca em Matriz com Ponteiro
=========================================================
*/

#include <stdio.h>

int main() {

    int matriz[4][4] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {50, 60, 70, 80},
        {5, 90, 12, 18}
    };

    int *p = &matriz[0][0];

    int maior = *p;
    int linha = 0;
    int coluna = 0;

    for(int i = 0; i < 16; i++) {

        if(*(p + i) > maior) {

            maior = *(p + i);

            linha = i / 4;
            coluna = i % 4;
        }
    }

    printf("Maior valor da matriz: %d\n", maior);
    printf("Posicao: linha %d coluna %d\n", linha, coluna);

    return 0;
}
