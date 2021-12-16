#include "insertionsort.h"

void insertionsort(int A[], int len){
    int i, j, x;

    for(i = 1; i < len; i++){
        x = A[i];
        j = i - 1;

        while (j >= 0 && x < A[j]){
            A[j + 1] = A[j];
            j--;
        }

        A[j + 1] = x; 
    }
}