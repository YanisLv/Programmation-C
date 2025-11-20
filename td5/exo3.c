#include<stdio.h>
#include<stdlib.h>

// 1)

int **alloc(int n, int m){
    int **tab = NULL;
    tab = (int**)malloc(n*sizeof(int*));

    if(tab != NULL){
        for(int i = 0; i < n; i++){
            tab[i] = (int*)malloc(m*sizeof(int));
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                tab[i][j] = 0;
            }
        }
    }
    return tab;
}

//2)
void alloc_sr(int *** tab, int n,int m){
    //tab = NULL;
    *tab = (int**)malloc(n*sizeof(int*));
    
    if(tab != NULL){
        for(int a = 0; a<n; a++){
            (*tab)[a] = malloc(m*sizeof(int));
        }
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                (*tab)[i][j] = 0;
            }
        }
    }
        
}

//3)

int **produit_matriciel(int ** a, int **b, int n){ // penser a faire matrice n*m
    int **res = NULL;
    res = (int**)malloc(n*sizeof(int*));
    
    if(res != NULL){
        for(int i = 0; i < n; i++){
            (*res)[i] = (int*)malloc(size(of(int)));
        }
    }

    for(int i = 0; i<n; i++){
        for(int k = 0; k < n;k++){
            for(int j = 0; j<m; j++){
                res[i][j] =  
            }
        }
    }

    return res;

}

void afficher(int **tab, int n, int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }
}
int main(){
    
    int n,m;
    printf("entrez n : \n");
    scanf("%d",&n);
    printf("entrez m : \n");
    scanf("%d",&m);
    int **tab = alloc(n,m);
    //afficher(tab,n,m);
    int **tab2 = NULL;
    alloc_sr(&tab2,n,m);
    afficher(tab2,n,m);
    free(tab);
    free(tab2);
    return 0;
}