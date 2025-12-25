#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//Exercice 1)
// Le programme lit les 3 notes d'une matières puis va calculer la moyenne pondérée avec 25 % pour les cc1 et cc2 et 50% pour le CT
//puis va vérifier les 2 cas : inférieur a 10 ou supérieur puis affiche le résultat de la note et du cas.

//2)


/*
int main(){

    int a,b;
    printf("entrez les valeurs a et b\n");
    scanf("%d %d",&a,&b);

    if((a<0 && b>0) || (a>0 && b<0)){
        printf("le résultat est négatif\n");
    }
    else if (a == 0 || b ==0)
    {
        printf("le résultat est nul \n");
    }
    else{
        printf("le résultat est positif");
    }
    
    return 0;
}
*/

// EXERCICE 2)

//1)
int main(){

    int n,k=1;
    float e=0;

    printf("entrez un entier n : \n");
    scanf("%d",&n);
    
    for(int i = 0; i<n;i++){
        k = 1;
        for(int j = 1; j<i;j++){
            k *= j;
        }
        e += 1/k;
    }
    printf("expo %d vaut %.2f", n, e);
    
    return 0;
}