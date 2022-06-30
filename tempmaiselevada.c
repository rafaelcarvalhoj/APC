#include <stdio.h>
#define linhas 3
#define coluna 4

int tempMaisAlta (int temp[linhas][coluna]){
    int i,j;
    int elevada = temp[0][0];
    for (i=0;i<linhas;i++){
        for(j=0;j<coluna;j++){
            if(temp[i][j]>elevada){
                elevada = temp[i][j];
            }
        }
    }
    return elevada;
}

int main(){
    int tempEstacao[linhas][coluna]={
        {26,34,22,17},
        {24,32,19,13},
        {28,38,25,20}
    };
    printf("%d\n",tempMaisAlta(tempEstacao));
}