/*
=========================================================
FATEC IPIRANGA - CENTRO PAULA SOUZA
Dscplna: PEM - Programacao Estruturada e Modular

Professor: Prof. Verssmo
Aluno: Gabrlel Araujo da Slva
R.A.: 2040482522037

Exercco 06 - Letura e Escrta de Struct va Ponteiro
=========================================================
*/

#include <stdio.h>
#include <string.h>

struct Produto {

    char nome[40];
    float preco;
    int estoque;
};

int main() {

    struct Produto produto;

    struct Produto *p = &produto;

    strcpy((*p).nome, "Teclado");
    (*p).preco = 150.50;
    (*p).estoque = 20;

    printf("=== Usando (*p).campo ===\n");

    printf("Nome: %s\n", (*p).nome);
    printf("Preco: %.2f\n", (*p).preco);
    printf("Estoque: %d\n\n", (*p).estoque);

    strcpy(p->nome, "Mouse");
    p->preco = 80.90;
    p->estoque = 15;

    printf("=== Usando -> ===\n");

    printf("Nome: %s\n", p->nome);
    printf("Preco: %.2f\n", p->preco);
    printf("Estoque: %d\n", p->estoque);

    return 0;
}
