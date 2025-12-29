#include<stdio.h>
#include<stdlib.h>
#include<time.h>

// ------------EXERCICE 2)

//1)
/*
int main(){
    int n, somme = 0;
    do{
        printf("entrez un nombre n positif :\n");
        scanf("%d",&n);
    }while(n<= 0);

    for(int i = 0; i<=n;i++){
        somme += i;
    }
    printf("le resultat des %d premiers entiers est %d \n",n,somme);
    return 0;
}
*/

/*
//2)
int main(){
    int n, somme = 0;
    int m = 0;
    do{
        printf("entrez un nombre n positif :\n");
        scanf("%d",&n);
    }while(n<= 0);
    for(int i = 0; i < n-1;i++){
        for(int k = 0; k<i*i;k++){
            printf(" ");
        }
        printf("**");
        for(int j = 0; j<i;j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
*/

//---------- EXERCICE 3--------

//1) 10 car il n'y a que 10 chiffres dans [0,9]

//2)
/*
void freq(int *T, int n, float **F){
    float somme = 0, moy = 0;
    for(int i = 0; i<10;i++){
        for(int j = 0; j<n;j++){
            if(i == T[j]){
                somme ++;
            }
        }
        moy = somme / 10;
        (*F)[i] = moy;
        somme = 0;
    }
}
void afficher(float *t,int n){
    for(int i = 0; i<n;i++){
        printf("%.2f, ",t[i]);
    }
}

int main(){

    srand(time(NULL));
    int t[15] ={7,4,5,7,9,6,3,7,8,0,3,6,9,8,7};
    float *f = malloc(10*sizeof(float));
    for(int i = 0; i<10;i++){
        f[i] = 0;
    }
    freq(t,15,&f);
    afficher(f,10);
    free(f);
    return 0;
}
*/
// ---------EXERCICE 4------------
/*
//1)
struct date{
    unsigned short j,m,a;
};

//2)
void afficher_date(struct date *d){
    printf("%02u/%02u/%04u",d->j,d->m,d->a);
}

//3) il doit enlever le &

//4)

struct date *creation(unsigned short j, unsigned short m, unsigned short a)
{
    struct date *d= malloc(sizeof(struct date));
    d->j = j, d->m = m, d->a = a;
    return d;
}

int main(){
    struct date *d = creation(7,5,2002);
   afficher_date(d);
    return 0; 
} 
*/ 
// ------ EXERCICE 5---

//1)

//2) non il faudrait utiliser un pointeur de pointeur dans le prototype de la fonction car on souhaite
// modifier ce tableau or ici T est une copie locale du pointeur passé par le programme. Donc
// la fonction ne modifie que la copie locale et à la sortie de la fonction, rien n'aura changé
// la memoire est perdue

// EXERCICE 6

24.