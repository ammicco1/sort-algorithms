#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "heapsort.h"
#include "mergesort.h"
#include "insertionsort.h"
#include "quicksort.h"

#define LEN 23

void print_array(int A[], int len);

int main(){
    int i, choise; 
    int a[LEN];
    srand(time(NULL)); 

    while(1){

        for(i = 0; i < LEN; i++){
            a[i] = rand();
        }

        printf("---------------------------------------------");
        printf("WHICH ALGORITHM DO YOU WANT TO USE?");
        printf("\t- 1: INSERTIONSORT");
        printf("\t- 2: MERGESORT");
        printf("\t- 3: HEAPSORT");
        printf("\t- 4: QUICKSORT");
        printf("---------------------------------------------\n");
        printf("CHOISE: "); scanf("%d", &choise);

        switch (choise){
            case 1: printf("YOUR CHOISE IS: INSERTIONSORT.\nTHE NUMBER TO SORT ARE: "); print_array(a, LEN); 
            printf("-- INSERTIONSORT --"); insertionsort(a, LEN); 
            printf("-- SORTED ARRAY --"); print_array(a, LEN); break;
            case 2: printf("YOUR CHOISE IS: MERGESORT.\nTHE NUMBER TO SORT ARE: "); print_array(a, LEN); 
            printf("-- MERGESORT --"); mergesort(a, 0, LEN - 1); 
            printf("-- SORTED ARRAY --"); print_array(a, LEN); break;
            case 3: printf("YOUR CHOISE IS: HEAPSORT.\nTHE NUMBER TO SORT ARE: "); print_array(a, LEN); 
            printf("-- HEAPSORT --"); heapsort(a, LEN); 
            printf("-- SORTED ARRAY --"); print_array(a, LEN); break;
            case 4: printf("YOUR CHOISE IS: QUICKSORT.\nTHE NUMBER TO SORT ARE: "); print_array(a, LEN); 
            printf("-- QUICKSORT --"); quicksort(a, 0, LEN - 1); 
            printf("-- SORTED ARRAY --"); print_array(a, LEN); break;
            default: printf("!! NOT VALID CHOISE !!"); break;
        }
    }

    return 0;

}

void print_array(int A[], int len){
    int i; 

    for(i = 0; i < len; i++){
        if(A[i] < 10){
            printf("|  %d  |",A[i]);
        }else if(A[i] > 9 && A[i] < 100){
            printf("|  %d |",A[i]);
        }else if(A[i] > 99 && A[i] < 1000){
            printf("| %d |",A[i]);
        }else if(A[i] > 999 && A[i] < 10000){
            printf("| %d|",A[i]);
        }else if(A[i] > 9999 && A[i] < 100000){
            printf("|%d|",A[i]);
        }
    }

    printf("\n");
}