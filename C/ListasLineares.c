#include <stdio.h>
#include <stdlib.h>

int main(){
    // LISTA LINEAR ESTÁTICA
    int numeros[5] = {10, 20, 30, 40, 50};

    printf("LISTA LINEAR ESTÁTICA\n");
    printf("%d\n\n", numeros[2]);

    //LISTA LINEAR DINÂMICA
    int* num = (int*) malloc(3 * sizeof(int)); // ALOCANDO MEMORIA INICIAL

    num[0] = 10;
    num[1] = 20;
    num[2] = 30; 

    printf("LISTA LINEAR DINÂMICA (ALOCAÇÃO DE MEMORIA INICIAL)\n");
    printf("%d, ", num[0]);
    printf("%d, ", num[1]);
    printf("%d, ", num[2]);

    num = (int*) realloc(num, 5 * sizeof(int)); // REALOCANDO A MEMORIA PARA EXPANDIR A LISTA

    num[3] = 40;
    num[4] = 50; 

    printf("LISTA LINEAR DINÂMICA (REALOCAÇÃO DE MEMORIA INICIAL)\n");
    printf("\n\n%d, ", num[3]);
    printf("%d ", num[4]);
}