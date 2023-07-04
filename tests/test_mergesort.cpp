#include "sort.h"

int main() {
    // Cria o vetor de 10 elementos
    int vetor[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
    int size = 10;
    merge_sort(vetor, size);
}