#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int *allou(int n){
    int *tab = NULL;
    tab = (int*)malloc(n*sizeof(short);
    for(int i = 0; i < n; i++){
        tab[i] = 0;
    }

    
    return tab;
}
//1)
struct nombre{
    int signe;
    short *ens;
    
};

//2)
struct nombre creer_nombre(int p){
    struct nombre nb;
    if(p%16 == 0){
        nb.signe = 0;
        for(int i = 0; i<p; i++){
        nb.ens[i] = 0;
        }
        allou(p);
    }
    return nb;
}

int main(){
    return 0;
}