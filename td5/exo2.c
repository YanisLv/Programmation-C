#include<stdio.h>
#include<stdlib.h>
#include<math.h>
short *allou(int n){
    unsigned short *tab = NULL;
    tab = (unsigned short*)malloc(n*sizeof(unsigned short));
    if(tab == NULL){
        return NULL;
    }
    for(int i = 0; i < n; i++){
        tab[i] = 0;
    }

    
    return tab;
}
//1)
struct nombre{
    int signe;
    unsigned short *ens;
    int k;
    
};

//2)
struct nombre creer_nombre(int p){
    struct nombre nb;
    if(p%16 != 0){
        printf("erreur, p doit etre multiple de 16");
        nb.ens = NULL;
        nb.signe = 0;
        return nb;
    }
    nb.signe = 0;
    nb.k = p/16;
    nb.ens = allou(nb.k);
    return nb;
}
//3)

struct nombre addsub(struct nombre a, struct nombre b, struct nombre res, char ope){
    unsigned int carry = 0;
    unsigned int borrow = 0;
    unsigned int tmp = 0;
    res.signe = 0;
    int n = a.k;
    if(b.k < n){
        n = b.k;
    }
    if(ope == "+"){
        for(int i = 0; i<n; i++){
            tmp = (a.ens[i]+b.ens[i]) + carry;
            res.ens[i] = tmp % 65536;
            carry = tmp / 65536;
        }
        res.signe = a.signe;
    }
    else{
        for(int i = 0; i<n; i++){
            tmp = a.ens[i]-(b.ens[i] + borrow);
            if(tmp < 0){
                res.ens[i] = tmp + 65536;
                borrow = 1;
            }
            else{
                res.ens[i] = tmp;
                borrow = 0;
            }
        }
        res.signe = a.signe;
    }
    return res;
}
//4)
struct nombre mul(struct nombre a, struct nombre b, struct nombre res){
    unsigned int carry = 0;
    unsigned int tmp = 0;
    unsigned int somme = 0;
    for(int i = 0; i<b.k; i++){
        for(int j = 0; j<a.k;j++){

        }
    }
}

int main(){


    return 0;
}