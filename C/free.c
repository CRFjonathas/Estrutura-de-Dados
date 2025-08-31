#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ponteiro;

    // 1. Pedimos a memória
    ponteiro = (int *) malloc(sizeof(int));
    if (ponteiro == NULL){ return 1; }

    printf("memoria alocada com sucesso.\n");
    *ponteiro = 123;
    printf("O valor guardado é: %d\n", *ponteiro);

    // 2. Devolvemos a memória
    printf("Devolvendo a memoria para o sistema...\n");
    free(ponteiro);

    // Boa pratica: Após o fre, anule o ponteiro para evitar usa-lo por acidente.
    // Um ponteiro que apo nta para a  momoria ja liberada é chamado de "dangling pointer" (ponteiro solto)
    ponteiro = NULL;

    printf("Memoria liberada\n");

    return 0;
}