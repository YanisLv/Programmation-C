#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//------------ 1. MODELISATION DES PIECES ET DE LA GRILLE-------

//1)
struct piece{
    int **tab;
    int l,h;
    int code_couleur;
    int x,y;
};

struct grille{
    int n,m;
    struct piece *tab;
};

//2)

