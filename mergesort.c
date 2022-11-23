#include "mergesort.h"

void merge(int *A, int first_ind, int med_ind, int last_ind){
    int i, j, k;
    int n1 = med_ind - first_ind + 1;
    int n2 = last_ind - med_ind; 
    int L[MAX], R[MAX]; 

    for(i = 0; i < n1; i++){
        L[i] = A[first_ind + i];
    }
    
    for(j = 0; j < n2; j++){
        R[j] = A[med_ind + j + 1];
    }

    L[n1] = INFINITE;
    R[n2] = INFINITE;

    i = 0;
    j = 0;

    for(k = first_ind; k <= last_ind; k++){
        if(L[i] <= R[j]){
            A[k] = L[i++];
        }else{
           A[k] = R[j++]; 
        }   
    }
}

void mergesort(int *A, int first_ind, int last_ind){
    int med_ind;

    if(first_ind < last_ind) {
        med_ind = (first_ind + last_ind - 1) / 2; 
        mergesort(A, first_ind, med_ind); 
        mergesort(A, med_ind + 1, last_ind); 
        merge(A, first_ind, med_ind, last_ind); 
    }
}