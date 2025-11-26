#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

//1)
struct liste_chainee{
    int valeur;
    struct liste_chainee *next;
};

//2)

//--- INSERTION EN TETE
struct liste_chainee *insert_tete(struct liste_chainee *liste, int n){
    struct liste_chainee *new = NULL;
    new = (struct liste_chainee*)malloc(sizeof(struct liste_chainee));
    new->valeur = n;
    new->valeur = liste;
    return new;
}

// --- INSERTION EN QUEUE

struct liste_chainee *insert_queue(struct liste_chainee *liste, int n){
    struct liste_chainee *new = NULL, *T = liste;
    new = (struct liste_chainee*)malloc(sizeof(struct liste_chainee));
    new->valeur = n;
    new->next = NULL;
    while(T!= NULL && T->next != NULL){
        T = T->next;
    }
    if(L!= NULL){
        new->next = T->next;
        T->next = new;
        return L;
    }
    else{
        return N;
    }
    
}

//---INSERTION AVANT UN ELEMENT IDENTIFIE PAR UN POINTEUR SUR UNE CELLULE

struct liste_chainee insert_elem(struct liste_chainee *liste, struct liste_chainee *T,int n){
    struct liste_chainee *new = NULL, *P = liste;
    new = (struct liste_chainee*)malloc(sizeof(struct liste_chainee));
    new->valeur = n;

    while(P->next != T){
        P= P->next;
    }
    P->next = new;
    new->next = T;
    return liste;
    

}
