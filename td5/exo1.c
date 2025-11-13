#include<stdio.h>
#include<stdlib.h>

void afficher(int *tab, int n){
    for(int i = 0; i < n; i++){
        printf("%d  ",tab[i]);
    }
}

// 1)
int *allou(int n){
    int *tab = NULL;
    tab = (int*)malloc(n*sizeof(int));
    for(int i = 0; i < n; i++){
        tab[i] = 0;
    }
    return tab;
}




int main(){

    int n = 10, *tab = allou(n);
    tab = allou(n);
    afficher(tab, n);
    return 0;
}