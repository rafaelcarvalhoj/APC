#include <stdio.h>
#define tamanho 10

int main(){
    int num[tamanho];
    int i;
    float media;
    for(i=0;i<tamanho;i++){
        printf("\nDigite o %d° elemento\n",i+1);
        scanf("%d",&num[i]);
    }
    for(i=0;i<tamanho;i++){
        media += num[i];
    }
    media = (float)media/tamanho;
    printf("\nA media eh igual a: %.2f\n",media);
    return 0;
}