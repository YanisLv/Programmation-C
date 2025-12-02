#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
//------------------- I . Modélisation des véhicules et configurations-----------------

//1)
struct voiture{
    int ligne, colonne, longueur;
    char orientation;
    char nom;
};

struct configuration{
    struct voiture tab_voiture[16];
    int prec;
    int vehicule_mouv;
    char direction;
    int longueur;
};

//2)
struct rush_hour{
    struct configuration *C;
    int current_config;
    int size;
    int max;
    int nb_vehicules;
};

//3)
void increase_size(struct rush_hour *r, int n){
    int new_size = n+r->size;
    struct configuration *new = (struct configuration*)malloc(new_size*sizeof(struct configuration));

    if(new == NULL){
        printf("impossible d'augmenter la taille du tableau\n");
        return;
    }
    for(int i = 0; i<r->size;i++){
        new[i] = r->C[i];
    }
    free(r->C);
    r->C = new;
    r->size = new_size;
}

// -------------------- 2 . LECTURE ET AFFICHAGE -----------------------

//1)

struct rush_hour* allocate(char *nom_fichier){
    FILE *fic = fopen(nom_fichier,"r");
    if(fic != NULL){
        int i = 0, tmp_ligne, tmp_col, tmp_long;
        char tmp_ori, tmp_nom;
        struct rush_hour *r = (struct rush_hour*)malloc(sizeof(struct rush_hour));
        if(r == NULL){return NULL;}
        r->size = 2;
        r->current_config = 0;
        r->max = 0;
        struct configuration *C0 = (struct configuration*)malloc(r->size*sizeof(struct configuration));
        if(C0 == NULL){return NULL;}
        while(i<16 && fscanf(fic,"%d %d %d %c %c",&tmp_ligne, &tmp_col, &tmp_long,&tmp_ori,&tmp_nom) != EOF){
            C0->tab_voiture[i].ligne = tmp_ligne;
            C0->tab_voiture[i].colonne = tmp_col;
            C0->tab_voiture[i].longueur = tmp_long;
            C0->tab_voiture[i].orientation = tmp_ori;
            C0->tab_voiture[i].nom = tmp_nom;
            i++;
        }
        C0->prec = -1, C0->vehicule_mouv =-1, C0->longueur = -1, r->nb_vehicules = i, C0->direction = ' ';
        r->C[0] = *C0;
        fclose(fic);
        return r;
    }
    return NULL;

}

//2)
void desallocate(struct rush_hour *r){
    if(r!=NULL)
    {
        if(r->C != NULL){
            free(r->C);
        }
        free(r);
    }
}
/*
struct voiture{
    int ligne, colonne, longueur;
    char orientation;
    char nom;
};
*/

//3)
void print(struct rush_hour *r){
    if(r != NULL){printf("erreur de chargement du jeu\n");return;}
    int k = r->current_config;
    printf("+");
    for(int i = 0; i<6; i++){
        printf("-");
    }
    printf("+\n");
    for(int i = 0; i<6;i++){
        for(int j = 0; j<6; j++){
            if()
        }
    }
    
}


int main(){

    return 0;
}