#include "quicksort.h"

int partition(int *A, int first_ind, int last_ind){
    int x, i, j, tmp;

    x = A[last_ind];
    i = first_ind - 1;

    for(j = first_ind; j < last_ind; j++){
        if(A[j] <= x){
            i++;
            tmp     = A[i];
            A[i]    = A[j];
            A[j]    = tmp;
        }
    }

    tmp         = A[i + 1];
    A[i + 1]    = A[last_ind];
    A[last_ind] = tmp;

    return i + 1;
}

void quicksort(int *A, int first_ind, int last_ind){
    int q;

    if(first_ind < last_ind){
        q = partition(A, first_ind, last_ind);
        quicksort(A, first_ind, q - 1);
        quicksort(A, q + 1, last_ind);
    }
}