#include <stdio.h>

// & --> Operador de endereço
// * --> Operador de direção

int main(){

    int idade = 21;                                                                     // Criamos uma variável comum, a nossa "casa".

    int *ponteiro_para_idade  = &idade;                                                 // O 'int *' significa que este ponteiro foi feito para guardar endereços de variáveis do tipo 'int'.

    printf("Valor da variavel 'idade': %d\n", idade);                                   // O valor original da variável
    printf("Endereço de 'idade': %p\n", &idade);                                        // O endereço onde a variável 'idade' está guardada na memória (%p é o formato para imprimir endereços de memória)
    printf("Valor do 'ponteiro_para_idade': %p\n", ponteiro_para_idade);                // O que o ponteiro está guardando (o mesmo endereço de 'idade')
    printf("Valor que existe no endereço apontado: %d\n", *ponteiro_para_idade);        // Usamos o '*' para "visitar" o endereço e ver o valor que está lá
    
    return 0;
}