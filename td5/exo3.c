#include<stdio.h>
#include<stdlib.h>

// 1)

int *alloc(int n, int m){
    int **tab = NULL;
    tab = (int**)malloc(n*sizeof(int));

    if(tab != NULL){
        for(int(int i = 0; i < n; i++)){
            *tab[i] = (int*)malloc(m*sizeof(int));
        }
    }

}