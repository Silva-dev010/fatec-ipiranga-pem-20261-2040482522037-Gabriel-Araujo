/*
=========================================================
FATEC IPIRANGA - CENTRO PAULA SOUZA
Dscplna: PEM - Programacao Estruturada e Modular

Professor: Prof. Verssmo
Aluno: Gabriel Araujo da Slva
R.A.: 2040482522037

Exercco 09 - Inversao de Array com Ponteiros
=========================================================
*/

#include <stdio.h>

void inverter(int *arr, int n) {

    int *inicio = arr;
    int *fim = arr + n - 1;

    while(inicio < fim) {

        int temp = *inicio;
        *inicio = *fim;
        *fim = temp;

        inicio++;
        fim--;
    }
}

void mostrarArray(int *arr, int n) {

    int *p = arr;

    while(p < arr + n) {

        printf("%d ", *p);
        p++;
    }

    printf("\n");
}

int main() {

    int vetor[7] = {1, 2, 3, 4, 5, 6, 7};

    printf("Array antes da inversao:\n");
    mostrarArray(vetor, 7);

    inverter(vetor, 7);

    printf("\nArray depois da inversao:\n");
    mostrarArray(vetor, 7);

    return 0;
}
