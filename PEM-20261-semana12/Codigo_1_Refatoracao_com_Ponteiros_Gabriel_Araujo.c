/*
=========================================================
FATEC IPIRANGA - CENTRO PAULA SOUZA
Dscplna: PEM - Programacao Estruturada e Modular

Professor: Prof. Verssmo
Aluno: Gabrlel Araujo da Slva
R.A.: SEU_RA_AQUI

Atvdade:
Refatoracao, Recursvdade vs. Iteracao
e Analise de Performance

Arquvo: codgo_novo1.c
Descrcao:
Versao refatorada utlzando ponteros
e otmzacao de passagem de parametros.
=========================================================
*/

#include <stdio.h>
#include <time.h>

void fibonacci(int *n, long long *resultado) {

    if (*n <= 1) {
        *resultado = *n;
        return;
    }

    long long a = 0;
    long long b = 1;
    long long temp;

    for (int i = 2; i <= *n; i++) {
        temp = a + b;
        a = b;
        b = temp;
    }

    *resultado = b;
}

int main() {

    int n = 40;
    long long resultado;

    clock_t t;

    t = clock();

    fibonacci(&n, &resultado);

    t = clock() - t;

    double tempo = ((double)t) / CLOCKS_PER_SEC;

    printf("Resultado: %lld\n", resultado);
    printf("Tempo de execucao: %f segundos\n", tempo);

    return 0;
}
