/*
=========================================================
FATEC IPIRANGA - CENTRO PAULA SOUZA
Disciplina: PEM - Programação Estruturada e Modular

Professor: Prof. Verissimo
Aluno: Gabriel Araujo da Silva
R.A.: 2040482522037

Atividade:
Refatoração, Recursividade vs. Iteração
e Análise de Performance

Arquivo: codigo_novo2.c
Descrição:
Versão convertida de recursiva
para iterativa.
=========================================================
*/

#include <stdio.h>
#include <time.h>

long long fibonacci_iterativo(int n) {

    if (n <= 1)
        return n;

    long long anterior = 0;
    long long atual = 1;
    long long proximo;

    for (int i = 2; i <= n; i++) {
        proximo = anterior + atual;
        anterior = atual;
        atual = proximo;
    }

    return atual;
}

int main() {

    int n = 40;

    clock_t t;

    t = clock();

    long long resultado = fibonacci_iterativo(n);

    t = clock() - t;

    double tempo = ((double)t) / CLOCKS_PER_SEC;

    printf("Resultado: %lld\n", resultado);
    printf("Tempo de execucao: %f segundos\n", tempo);

    return 0;
}
