#include<stdio.h>
void damier(int t, int c){
    for(int k = 0; k<c;k++){
        for(int i = 0; i < c; i++){
            for(int j = 0; j< t/2;j++){
                printf("XX");
                printf("..");
            }
            printf("\n");
        }
        for(int i = 0; i < c; i++){
            for(int j = 0; j< t/2;j++){
                printf("..");
                printf("XX");
            }
            printf("\n");
        }
    }
}
int main()
{
    damier(4,2);
    return 0;
}