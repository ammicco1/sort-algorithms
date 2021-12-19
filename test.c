#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include "heapsort.h"
#include "mergesort.h"
#include "insertionsort.h"
#include "quicksort.h"

/* const to define the max length of array and the max number */
#define __LEN__ 1000
#define __MAX_NUM__ 1000

void print_array(int A[], int len);

int main(){
    int i, choise; 
    int a[__LEN__];
    clock_t start, end;
    double tot_time;
    srand(time(NULL)); 

    while(1){

        /* create the random array */
        for(i = 0; i < __LEN__; i++){
            a[i] = rand() % __MAX_NUM__;
        }

        printf("\n---------------------------------------------\n");
        printf("WHICH ALGORITHM DO YOU WANT TO USE?\n");
        printf("\t- 1: INSERTIONSORT\n");
        printf("\t- 2: MERGESORT\n");
        printf("\t- 3: HEAPSORT\n");
        printf("\t- 4: QUICKSORT\n");
        printf("---------------------------------------------\n");
        printf("\nCHOISE: "); scanf("%d", &choise);

        switch (choise){
            case 1: printf("YOUR CHOISE IS: INSERTIONSORT.\nTHE NUMBER TO SORT ARE: "); print_array(a, __LEN__); 
            printf("\n-- INSERTIONSORT --\n"); start = clock(); insertionsort(a, __LEN__); end = clock();
            printf("SORTED ARRAY: \t\t"); print_array(a, __LEN__); tot_time = (double)(end - start) / CLOCKS_PER_SEC; printf("\ntime of execution: %f\n", tot_time); break;

            case 2: printf("YOUR CHOISE IS: MERGESORT.\nTHE NUMBER TO SORT ARE: "); print_array(a, __LEN__); 
            printf("\n-- MERGESORT --\n"); start = clock(); mergesort(a, 0, __LEN__ - 1); end = clock();
            printf("SORTED ARRAY: \t\t"); print_array(a, __LEN__); tot_time = (double)(end - start) / CLOCKS_PER_SEC; printf("\ntime of execution: %f\n", tot_time); break;
            
            case 3: printf("YOUR CHOISE IS: HEAPSORT.\nTHE NUMBER TO SORT ARE: "); print_array(a, __LEN__); 
            printf("\n-- HEAPSORT --\n"); start = clock(); heapsort(a, __LEN__); end = clock();
            printf("SORTED ARRAY: \t\t"); print_array(a, __LEN__); tot_time = (double)(end - start) / CLOCKS_PER_SEC; printf("\ntime of execution: %f\n", tot_time); break;
            
            case 4: printf("YOUR CHOISE IS: QUICKSORT.\nTHE NUMBER TO SORT ARE: "); print_array(a, __LEN__); 
            printf("\n-- QUICKSORT --\n"); start = clock(); quicksort(a, 0, __LEN__ - 1); end = clock();
            printf("SORTED ARRAY: \t\t"); print_array(a, __LEN__); tot_time = (double)(end - start) / CLOCKS_PER_SEC; printf("\ntime of execution: %f\n", tot_time); break;
            
            default: printf("!! NOT VALID CHOISE !!\n"); break;
        }
    }

    return 0;

}

void print_array(int A[], int len){
    int i; 

    for(i = 0; i < len; i++){
        if(i == 0){printf("|");}
        if(A[i] < 10){
            printf("  %d  |",A[i]);
        }else if(A[i] > 9 && A[i] < 100){
            printf("  %d |",A[i]);
        }else if(A[i] > 99 && A[i] < 1000){
            printf(" %d |", A[i]);
        }else if(A[i] > 999 && A[i] < 10000){
            printf(" %d|", A[i]);
        }
    }

    printf("\n");
}