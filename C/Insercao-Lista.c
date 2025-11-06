#include <stdio.h>
#include <stdlib.h>

struct No {
    int dado;
    struct No* proximo;
};

void inserirNoInicio(struct No** inicio, int valor) {
    struct No* novo = (struct No*) malloc(sizeof(struct No));
    novo->dado = valor;
    novo->proximo = *inicio;
    *inicio = novo;
}