#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
//------------------- I . Modélisation des véhicules et configurations-----------------

//1)
struct voiture{
    int ligne, colonne, longueur;
    char orientation;
    char *nom;
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
    struct configuration *new = (struct configuration*)malloc(n*sizeof(struct configuration));
    if(n<r->size){
        return;
    }
    for(int i = 0; i<r->size;i++){
        new[i] = r->C[i];
    }
    free(r->C);
    r->C = new;
    r->size = n;
}

// -------------------- 2 . LECTURE ET AFFICHAGE -----------------------

//1)

struct rush_hour* allocate(char *nom_fichier){
    FILE *fic = fopen(nom_fichier,"r");
    if(fic != NULL){
        int i = 0, tmp_ligne, tmp_col, tmp_long;
        char tmp_ori, tmp_nom;
        struct configuration *C0 = (struct configuration*)malloc(sizeof(struct configuration));
        while(i<16 && fscanf(fic,"%d %d %d %c %c",&tmp_ligne, &tmp_col, &tmp_long,&tmp_ori,&tmp_nom)){
            C0->tab_voiture[i].ligne = tmp_ligne;
            C0->tab_voiture[i].colonne = tmp_col;
            C0->tab_voiture[i].longueur = tmp_long;
            C0->tab_voiture[i].orientation = tmp_ori;
            C0->tab_voiture[i].nom = tmp_nom;
            i++;
        }
        C0->prec = -1, C0->vehicule_mouv -1, C0->direction =" ", C0->longueur = -1;

    }
}


int main(){

    return 0;
}