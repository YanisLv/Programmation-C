#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//#include<math.h>

//-- EXO 1
/*
int main(){
    int n;
    printf("n = \n");
    scanf("%d",&n);
    int res = 1, i = 1;
    while(i<= n){

        res *= i;
        i++;
    }
    printf("fact %d = %d \n",n,res);
    return 0;

}
*/
int premier(int n){
    int cpt = 0;
    if(n == 1){
        return 0;
    }
    for(int i =2; i<n;i++){
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}
int parfait(int n){
    int somme = 0;
    for(int i = 1; i<n;i++){
        if(n%i == 0){
            somme += i;
        }
    }
    if(somme == n){
        return 1;
    }
    return 0;
}
//--------------- EXO 2---------------------
/*
int main(){
    int n;
    //printf("n = \n");
    //scanf("%d",&n);
    
    if(parfait(n)){
        printf("nombre parfait \n");
    }
    else{
        printf("pas parfait \n");
    }
    
    for(int i = 1; i<= 1000; i++){
        if(parfait(i)){
            printf("%d ",i);
        }
    }
    printf("\n");
    
    return 0;
}
*/

// ----------------- EXERCICE 3----------------
/*
int main(){

    int n, somme = 0, i = 0;
    while(scanf("%d",&n) != EOF){
        
        i++;
        somme +=  n;
    }
    printf("somme = %d moyenne = %d\n",somme, somme/i);

    return 0;
}
*/

int main(){

    int n, min max;
    do{
        min = 
    }while(scanf("%d",&n) != EOF);
}

