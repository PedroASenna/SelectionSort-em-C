//Criando funções para utilidades
/*
Separando as funções em partes, podemos deixar o SelectionSort
somente para ordenar, e definir outra função para imprimir e receber os dados.
*/

#include "utils.h"
#include <stdio.h>
#include <stdlib.h> // Para rand() e srand()
#include <time.h>   // Para time()

void printArray(int arr[], int size) {
    int i;
    
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n"); 
}

void fillRandom(int arr[], int size, int max_value) { 
    // Inicializa o gerador de numeros aleatorios
    srand(time(NULL));

    for (int i = 0; i < size; i++) {
        // gera um valor entre 0 e 1
        arr[i] = rand() % max_value;
    }
}

//Função para gerar numeros unicos e aleatorios
void fillUniqueRandom(int arr[], int size) {
    //Preenche o array com a sequencia de 0 a size-1
    for (int i = 0; i < size; i ++) {
        arr[i] = i;
    }

    //Embaralhamento
    //é feito do ultimo para o primeiro
    srand(time(NULL)); //garante uma nova sequencia

    for (int i = size - 1; i > 0; i--) {
        //gera um numero aleatorio J entre 0 e I
        int j = rand() % (i + 1);

        //troca o elemento "arr[i]" com o elemento aleatorio "arr[j]"
        swap(&arr[i], &arr[j]);
    }
}


void fillReverse(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        //O primeiro elemento recebe o valor maximo
        //O ultimo elemento recebe o valor minimo
        arr[i] = size - 1 - i;
    }
}


//Função para preencher o array em ordem crescente
void fillSorted(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = i;
    }
}