#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
//1)
struct liste_chainee{
    int val;
    struct liste_chainee *next;
};

//2)
// insertion tete
struct liste_chainee *insert_tete(struct liste_chainee *L, int val){
    struct liste_chainee *N = NULL;
    N = malloc(sizeof(struct liste_chainee));
    N->val = val;
    N->next = L;
    return N;
}

// insertion queue
struct liste_chainee *insert_queue(struct liste_chainee *L, int val){
    struct liste_chainee *N = NULL, *T = L;
    N = malloc(sizeof(struct liste_chainee));
    N->val = val;
    N->next = NULL;
    if(L == NULL){return N;}
    while(T != NULL && T->next != NULL){
        T = T->next;
    }
    T->next = N;
    return L;
}

// insertion apres element

struct liste_chainee *insert_elem(struct liste_chainee *L, struct liste_chainee *T, int val){
    struct liste_chainee *N = malloc(sizeof(struct liste_chainee));
    N->val = val;
    

}

int main(){


    return 0;
}