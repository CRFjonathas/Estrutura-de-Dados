#include <stdio.h>
#include <stdlib.h>

int main(){
    int *vetor_dinamico;
    int tamanho = 5;

    // 1. PEDIDO DE MEMÓRIA
    // Pedimos (tamanho) * (bytes de um int) de memória.
    // O (int *) "converte" o ponteiro genérico que a malloc retorna para um ponteiro de inteiro.
    vetor_dinamico = (int *) malloc(tamanho * sizeof(int));

    // 2. VERIFICAÇÃO DE SEGURANÇA (MUITO IMPORTANTE)
    // Se não houver memória disponível, malloc retorna NULL.
    if (vetor_dinamico == NULL){
        printf("Erro! Não  foi possivel alocar a memoria.");
        return 1; // encerra o programa indicando um erro
    }

    // 3. USO DA MEMÓRIA
    // A partir daqui, usamos 'vetor_dinamico' como um vetor normal.
    for(int i = 0; i < tamanho; i++){
        vetor_dinamico[i] = i * 10;
    }

    // 4. EXIBIÇÃO
    printf("Vetor preenchido:\n");
    for(int i = 0; i < tamanho; i++){
        printf("Posição %d: %d\n", i, vetor_dinamico[i]);
    }

    // 5. DEVOLUÇÃO DA MEMÓRIA
    // Avisamos o sistema que não vamos mais usar este bloco.
    free(vetor_dinamico);

    return 0;
}