#include<stdio.h>
#include<stdlib.h>

void tri_bulle(int *t, int n){
    int i = 0, j, tmp;
    while(i<n){
        j = i;
        while(j!=0 && t[j]<t[i]){
            tmp = t[j];
            t[j] = t[i];
            j++;
            }
        t[i] = tmp;
        i++;
    }
    
}

void afficher(int *t, int n){

    for(int i = 0; i<n; i++){
        printf("%d",t[i]);
    }
    printf("\n");
}

int main(){
    
    int t[255]= {5,8,9,6,4,3,2,1};
    afficher(t,8);
    tri_bulle(t,8);
    afficher(t,8);
    return 0;
}