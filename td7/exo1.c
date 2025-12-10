#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

//1)
int compteur(char *nom_fichier){
    int i = 0, lignes = 0, mots = 0;
    char tmp;
    FILE *fic = fopen(nom_fichier, "r");
        if(fic == NULL){
            return 0;
        }
        while(fscanf(fic,"%c",&tmp) != EOF){
            if(tmp != ' '){
                i++;
            }
            if(tmp == '\n'){
                lignes ++;
            }
            if(tmp == '\0'){
                mots++;
            }
        }
        return i,mots,lignes;
    fclose(fic);
}

//2)



int main(){

    int a,b,c = compteur("texte.txt");
    printf("il y a %d caracteres dans le fichier %d mots et %d lignes\n",a,b,c);
    
    return 0;
}