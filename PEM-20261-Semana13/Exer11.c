/*
=========================================================
FATEC IPIRANGA - CENTRO PAULA SOUZA
Dscplna: PEM - Programacao Estruturada e Modular

Professor: Prof. Verssmo
Aluno: Gabriel Araujo da Slva
R.A.: 2040482522037

Exercco 11 - Funcao com Multiplos Retornos
=========================================================
*/

#include <stdio.h>

void estatisticas(int *v, int n, int *soma, float *media, int *maior, int *menor) {

    *soma = 0;
    *maior = v[0];
    *menor = v[0];

    for(int i = 0; i < n; i++) {

        *soma += v[i];

        if(v[i] > *maior) {
            *maior = v[i];
        }

        if(v[i] < *menor) {
            *menor = v[i];
        }
    }

    *media = (float)(*soma) / n;
}

int main() {

    int vetor[6] = {10, 20, 30, 40, 50, 60};

    int soma;
    int maior;
    int menor;
    float media;

    estatisticas(vetor, 6, &soma, &media, &maior, &menor);

    printf("Soma: %d\n", soma);
    printf("Media: %.2f\n", media);
    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

    return 0;
}
