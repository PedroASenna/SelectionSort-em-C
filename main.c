// main.c - Versão Corrigida para Teste Múltiplo

#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

#include "selection_sort.h"
#include "utils.h"

//valor para demonstrar a ordenação na tela
#define TAMANHO_DO_VETOR 10

// Função para rodar o teste e imprimir o resultado
void run_test(int *arr, int size, char *test_name) {
    clock_t inicio, fim;
    double tempo_execucao;

    printf("--- Cenário: %s (N=%d) ---\n", test_name, size);

    // Imprimir array antes de ordenar
    printf("Array original:\n");
    printArray(arr, size); 

    // Medir o tempo
    inicio = clock();
    selectionSort(arr, size);
    fim = clock();

    // Calcular e imprimir
    tempo_execucao = ((double) (fim - inicio)) / CLOCKS_PER_SEC;

    printf("Ordenação concluída.\n");
    printf("Array ordenado:\n");
    printArray(arr, size);
    
    printf("Tempo de execução: %.4f segundos.\n\n", tempo_execucao);
}

int main() {
    //Alocação de memória
    int *array_teste = (int *)malloc(TAMANHO_DO_VETOR * sizeof(int));

    if (array_teste == NULL) {
        printf("Erro na alocação de memoria!\n");
        return 1;
    }

    // ----------------------------------------------------
    // TESTE 1: PIOR CASO (REVERSO)
    // ----------------------------------------------------
    fillReverse(array_teste, TAMANHO_DO_VETOR);
    run_test(array_teste, TAMANHO_DO_VETOR, "Pior Caso (Reverso)");
    
    
    // ----------------------------------------------------
    // TESTE 2: CASO MÉDIO (ALEATÓRIO)
    // ----------------------------------------------------
    fillUniqueRandom(array_teste, TAMANHO_DO_VETOR); 
    run_test(array_teste, TAMANHO_DO_VETOR, "Caso Médio (Aleatório Único)");
    
    
    // ----------------------------------------------------
    // TESTE 3: MELHOR CASO (ORDENADO)
    // ----------------------------------------------------
    fillSorted(array_teste, TAMANHO_DO_VETOR);
    run_test(array_teste, TAMANHO_DO_VETOR, "Melhor Caso (Ordenado)");

    
    // 4. Libera a memória no final
    free(array_teste);

    return 0;
}