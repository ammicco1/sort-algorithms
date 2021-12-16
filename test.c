#include <stdio.h>
#include <stdlib.h>
#include "heapsort.h"
#include "mergesort.h"
#include "insertionsort.h"
#include "quicksort.h"

void print_array(int A[], int len);

int main(){
    int i; 
    int array[] = {3, 5, 2, 45, 31, 1, 356, 8, 1, 22, 231, 341, 4, 56, 7, 3, 2}, 
        array2[] = {3, 5, 2, 45, 31, 1, 356, 8, 1, 22, 231, 341, 4, 56, 7, 3, 2}, 
        array3[] = {3, 5, 2, 45, 31, 1, 356, 8, 1, 22, 231, 341, 4, 56, 7, 3, 2},
        array4[] = {3, 5, 2, 45, 31, 1, 356, 8, 1, 22, 231, 341, 4, 56, 7, 3, 2};

    /*printf("con heapsort:\n\n");
    print_array(array, sizeof(array) / sizeof(int)); printf("\n");
    heapsort(array, sizeof(array) / sizeof(int));
    print_array(array, sizeof(array) / sizeof(int));

    printf("\n\ncon mergesort:\n\n");
    print_array(array2, sizeof(array2) / sizeof(int)); printf("\n");
    mergesort(array2, 0, (sizeof(array2) / sizeof(int)) - 1);
    print_array(array2, sizeof(array2) / sizeof(int)); 

    printf("\n\ncon insertionsort:\n\n");
    print_array(array3, sizeof(array3) / sizeof(int)); printf("\n");
    insertionsort(array3, sizeof(array3) / sizeof(int));
    print_array(array3, sizeof(array3) / sizeof(int));

    printf("\n\ncon quicksort:\n\n");
    print_array(array4, sizeof(array4) / sizeof(int)); printf("\n");
    quicksort(array4, 0, (sizeof(array4) / sizeof(int)) - 1);
    print_array(array4, sizeof(array4) / sizeof(int)); printf("\n");*/

    return 0;

}

void print_array(int A[], int len){
    int i; 

    for(i = 0; i < len; i++){
        printf("%d  ",A[i]);
    }
}