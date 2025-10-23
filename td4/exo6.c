#include<stdio.h>
#include<stdlib.h>

void fermier(int t, int p){
    int i = 0;
    int m =(p) ,d = i;
    for(i = 0; i < t; i++){
        m -= 4;
        d += 2;
    
        printf("%d m et %d d \n",m,d);
    }
    if(4*m + 2*d == p){
        printf("khoya t'as %d moutons et %d dindons dla farce \n",m,d);
    }
    else{
        printf("impossible avec %d moutons et %d dindons\n",m,d);
    }
    
}

int main(){
    fermier(36,100);
    return 0;
}