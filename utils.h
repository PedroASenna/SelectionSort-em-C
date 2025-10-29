// utils.h

#ifndef UTILS_H
#define UTILS_H

// Função de troca (swap) - Auxiliar, mas essencial.
void swap(int *a, int *b);

// Função para imprimir um array
void printArray(int arr[], int size);

// Função para preencher o array com números aleatórios
void fillRandom(int arr[], int size, int max_value);

//Função para ordem decrascente
void fillReverse(int arr[], int size);

//Função para ordenar o array
void fillSorted(int arr[], int size);

void fillUniqueRandom(int arr[], int size);

#endif