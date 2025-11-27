#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

//------------ I - MODELISATION DES PIECES ET DE LA GRILLE-----------------

//1)

struct piece{
    int **tab;
    int l,h;
    int couleur;
    int x,y;
};

struct grille{
    int k;
    int n,m;
    struct piece *tab;
    // int ** t (a voir)
};

//2)
struct piece creer_piece(int x, int y, int l, int h,int couleur){
    struct piece *p = NULL;
    int **t = NULL;
    p = (struct piece *)malloc(sizeof(struct piece));
    t = (int **)malloc(h*sizeof(int*));
    if(t != NULL){
        for(int i = 0; i < h; i++){
            t[i] = (int*)malloc(l*sizeof(int));
        }
    }
    p.tab = t;
    p.x = x, p.y = y, p.couleur = couleur;
    return p;
    
}

//void detruire_piece(*struct piece p){


//3)






//--- PROGRAMME PRINCIPAl

int main(){

    return 0;
}