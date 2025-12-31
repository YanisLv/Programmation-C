#include<stdio.h>
#include<stdlib.h>
#include<time.h>


//--------- EXERCICE 2

//1) AUTRE METHODE OBLIGEEEE 🛑🛑🛑🛑🛑🛑🛑🛑🛑🛑🛑🛑🛑🛑
/*
int main(){
    int n = 4;
    int k = n-1;
    printf("[");
    for(int i = 1; i<n*2;i++){
        if(i <=n){
            printf("%c",'0'+i);
        }
        else{
            printf("%c",'0'+k);
            k--;
        }
    }
    printf("]\n");
    return 0;
}
*/

//2)

int main(){

    int n = 4;
    int k = n-1;

    for(int i = 1; i<=n;i++){
        n = i;
        k = n-1;
        printf("[");
        for(int j = 1; j<n*2;j++){
            if(i <=n){
                printf("%c",'0'+j);
            }
            else{
                printf("%c",'0'+k);
                k--;
            }
        }
        printf("]\n");
    }

    return 0;
}