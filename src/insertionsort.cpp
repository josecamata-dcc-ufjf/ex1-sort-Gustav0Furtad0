#include "sort.h"
#include <iostream>

using namespace std;

void insertion_sort(int *array, int size) {
    int i, j, aux;
    for (i = 1; i < size; i++) {
        aux = array[i];
        for (j = i; (j > 0) && (aux < array[j - 1]); j--) {
            array[j] = array[j - 1];
        }
        array[j] = aux;
    }
}

