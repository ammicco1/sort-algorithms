#include "heapsort.h"

void maxheapify(int a[], int len, int ind){
    int l = 2 * ind;
    int r = l + 1; 
    int m, k; 

    m = (l < len && a[l] > a[ind]) ? l : ind;
    if(r < len && a[r] > a[m]){
        m = r;
    }
    if(m != ind){
        k = a[ind];
	    a[ind] = a[m];
	    a[m] = k;
        maxheapify(a, len, m);
    }

}
void build_maxheap(int a[], int len){
    int l; 
    for(l = (len / 2) -1; l >= 0; l--){
        maxheapify(a, len, l);
    }
}
void heapsort(int a[], int len){
    int i, k; 

    build_maxheap(a, len);

    for(i = len - 1; i > 0; i--){
        k = a[0];
	    a[0] = a[i];
	    a[i] = k;
        len = len -1;
        maxheapify(a, i, 0);
    }
}