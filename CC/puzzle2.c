#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

// ---------------- 1 -  Modélisation des pièces et de la grille----------------------.3

//1)
struct piece{
    int **tab;       // tab 2D
    int l,h,couleur;
    int x,y;        // coordonnées
};

struct grille{
    int n,m,k;        // grille dimension
    struct piece **tp;
};

//2)

struct piece *creer_piece(int l,int h, int x,int y,int couleur){
    struct piece *p = (struct piece*)malloc(sizeof(struct piece));
    if(p == NULL){return NULL;}
    p->tab = (int**)malloc(h*sizeof(int*));
    if(p->tab == NULL){return NULL;}
    for(int i = 0; i<h; i++){
        p->tab[i] = (int*)malloc(l*sizeof(int));
        if(p->tab[i] == NULL){return NULL;}
        for(int j = 0; j<l; j++){
            p->tab[i][j] = 0;
        }
    }
    p->h = h, p->l = l; p->x = x; p->y = y; p->couleur = couleur;
    return p;

}
void detruire_piece(struct piece *p){
    if(p != NULL){
        if(p->tab != NULL){
            for(int i = 0; i<p->h; i++){
                if(p->tab[i] != NULL){
                    free(p->tab[i]);
                }
            }
            free(p->tab);       
        }
        free(p);
    }
}
//3)
struct grille* creer_grille(int n, int m, int k){
    struct grille *g = (struct grille*)malloc(sizeof(struct grille));
    if(g == NULL){return NULL;}
    g->m = m, g->n = n, g->k = k;
    g->tp = (struct piece **)malloc(k*sizeof(struct piece*));
    if(g->tp == NULL){return NULL;}
    for(int i = 0; i<k;i++){
        g->tp[i] = NULL;
    }
    return g;
}



void detruire_grille(struct grille *g){
    if(g!= NULL){
        if(g->tp != NULL){
            for(int i = 0;i<g->k; i++){
                if(g->tp[i] != NULL){
                    detruire_piece(g->tp[i]);
                }
            }
            free(g->tp);
        }
        free(g);
    }
}


//-----------------------2. Chargement et affichage texte du puzzle-------------------

//1)
struct grille *charger_puzzle(char *nom_ficher){
    FILE *fic = fopen(nom_ficher,"r");
    if(fic != NULL){
        int n,m,k;
        int l,h,couleur; //⛔ UTILISER CREER_PIECE
        fscanf(fic, "%d %d %d",&n,&m,&k);
        struct grille *g = creer_grille(n,m,k);
        int i = 0;
        while(i<k){  //  UNE LIGNE i == 1 pièce !!!!!!  ⛔⛔⛔
            fscanf(fic,"%d %d",&l, &h);
            int *tab = (int*)malloc((l*h)* sizeof(int)); 
            for(int j = 0; j<l*h; j++){
                fscanf(fic,"%d",&tab[j]);
            }
            fscanf(fic,"%d",&couleur);    //⛔ UTILISER CREER_PIECE
            g->tp[i] = creer_piece(l,h,-1,-1,couleur);
            for(int m = 0;m<g->tp[i]->h; m++){
                for(int n = 0; n<g->tp[i]->l;n++){
                    g->tp[i]->tab[m][n] = tab[m*g->tp[i]->l+n];   //⛔ UTILISER CREER_PIECE
                }
            }
            //g->tp[i]->x = -1, g->tp[i]->y = -1; //⛔ UTILISER CREER_PIECE
            i++;
        }


        fclose(fic);
        return g;
    }
    
}

void afficher_pieces(struct grille *g){
    if (g==NULL){printf("erreur chargement grille \n");return;}
    printf("+");
    for(int i = 0; i<g->m;i++){
        printf("-");
    }
    printf("+\n");
    for(int i = 0;i<g->n;i++){
        printf("|");
        for(int j = 0; j<g->m; j++){
            printf("");
        }
        printf("|\n");
    }
}

//3)

void afficher(struct grille *g){
    if (g==NULL){printf("erreur chargement grille \n");return;}
    printf("+");
    for(int i = 0; i<g->m;i++){
        printf("-");
    }
    printf("+\n");
    for(int i = 0;i<g->n;i++){
        printf("|");
        for(int j = 0; j<g->m; j++){
            if(g->tp[i]->x != -1 ){
                if(g->tp[i]->x == i && g->tp[i]->y ==j){
                    for(int k = 0; k<g->tp[i]->h;k++){
                        for(int m = 0; m<g->tp[i]->l;m++){
                            printf("%d",g->tp[i]->couleur);
                        }
                    }
                }
            }
        }
        printf("|\n");
    }
    printf("+");
    for(int i = 0; i<g->m;i++){
        printf("-");
    }
    printf("+\n");
}
//--------------- PROGRAMME PRINCIPAL-----------------
int main(){
    struct grille *g = charger_puzzle("puzzle.txt");
    afficher(g);
    return 0;
}