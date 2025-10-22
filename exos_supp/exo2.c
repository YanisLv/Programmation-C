#include<stdio.h>
#include<stdlib.h>
#include<time.h>

// Écrire une fonction :
// qui retourne 1 si la matrice carrée mat est symétrique, 0 sinon.
// Tester dans le main plusieurs exemples.

int est_symetrique(int t[100][100], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(t[i][j] != t[j][i]){
                return 0;
            }
        }
    }
    return 1;
}