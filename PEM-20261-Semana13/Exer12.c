/*
=========================================================
FATEC IPIRANGA - CENTRO PAULA SOUZA
Dscplna: PEM - Programacao Estruturada e Modular

Professor: Prof. Verssmo
Aluno: Gabriel Araujo da Slva
R.A.:2040482522037

Exercco 12 - Ordenacao por Selecao com Ponteiros
=========================================================
*/

#include <stdio.h>

void trocar(int *a, int *b) {

    int temp = *a;
    *a = *b;
    *b = temp;
}

void mostrar(int *v, int n) {

    for(int i = 0; i < n; i++) {
        printf("%d ", *(v + i));
    }

    printf("\n");
}

void selectionSort(int *v, int n) {

    for(int i = 0; i < n - 1; i++) {

        int *menor = v + i;

        for(int j = i + 1; j < n; j++) {

            if(*(v + j) < *menor) {
                menor = v + j;
            }
        }

        trocar(v + i, menor);

        printf("Troca %d: ", i + 1);
        mostrar(v, n);
    }
}

int main() {

    int vetor[8] = {64, 25, 12, 22, 11, 90, 5, 33};

    printf("Array original:\n");
    mostrar(vetor, 8);

    printf("\nProcesso de ordenacao:\n");
    selectionSort(vetor, 8);

    printf("\nArray ordenado:\n");
    mostrar(vetor, 8);

    return 0;
}
