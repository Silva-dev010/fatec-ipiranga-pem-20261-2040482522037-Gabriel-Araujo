/*
=========================================================
FATEC IPIRANGA - CENTRO PAULA SOUZA
Dscplna: PEM - Programacao Estruturada e Modular

Professor: Prof. Verssmo
Aluno: Gabrlel Araujo da Slva
R.A.: 2040482522037

Exercco 07 - Percurso com Incremento
=========================================================
*/

#include <stdio.h>

int main() {

    int vetor[8] = {5, 8, 12, 20, 3, 15, 7, 10};

    int *p = vetor;

    int soma = 0;
    int maior = *p;
    int menor = *p;

    printf("Elementos do vetor:\n");

    for(int i = 0; i < 8; i++) {

        printf("Valor: %d | Endereco: %p\n", *(p + i), (p + i));

        soma += *(p + i);

        if(*(p + i) > maior) {
            maior = *(p + i);
        }

        if(*(p + i) < menor) {
            menor = *(p + i);
        }
    }

    float media = soma / 8.0;

    printf("\nSoma: %d\n", soma);
    printf("Media: %.2f\n", media);
    printf("Maor valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

    return 0;
}
