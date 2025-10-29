#include "selection_sort.h" // Inclui o protótipo
#include "utils.h"          // Inclui a função swap

// Implementação da função de troca (swap)
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

//SelectionSort
void selectionSort(int arr[], int n) {
    int i, j, min_idx;

    // Loop para mover o limite do subarray não ordenado
    for (i = 0; i < n - 1; i++) { 
        min_idx = i;

        // Loop interno para encontrar o valor minimo
        for (j = i + 1; j < n; j++) { 
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }

        // Troca do menor numero para o primeiro colocado
        swap(&arr[min_idx], &arr[i]);
    }
}