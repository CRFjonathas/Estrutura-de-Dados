#include <stdio.h>
#include <stdlib.h>

int main(){
    int *vetor_malloc;
    int *vetor_calloc;
    int tamanho = 5;

    // --- 1. Usando malloc ---
    // Pede um bloco único de (5 * sizeof(int)) bytes. 
    vetor_malloc = (int *) malloc(tamanho * sizeof(int));
    if(vetor_malloc == NULL) { return 1; }

    printf("Vetor alocado com MALLOC (memoria 'suja'):\n");
    for(int i = 0; i < tamanho; i++){
        // será impresso aqui o lixo de memória!
        printf("vator_dinamico[%d] = %d\n", i, vetor_malloc[i]);
    }

    printf("\n----------------------------------------\n\n");
    // --- 2. Usando calloc ---
    // Pede 5 elementos, cada um com tamanho sizeof(int).
    vetor_calloc = (int*) calloc(tamanho, sizeof(int));
    if(vetor_calloc == NULL){ return 1; }

    printf("Vetor alocado  com CALLOC (memoria 'limpa'): \n");
    for(int i = 0; i < tamanho; i++){
        // A calloc garante que todos os valores comecem em 0.
        printf("veto_calloc[%d] = %d\n", i, vetor_calloc[i]);
    }

    // --- 3. Limpeza ---
    free(vetor_malloc);
    free(vetor_calloc);


    return 0;
}