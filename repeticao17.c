#include <stdio.h>

int main(){
    int tamPiramide,i,j;
    printf("Digite um numero: ");
    scanf("%d",&tamPiramide);
    int numero[tamPiramide];
    for (i=0;i<=tamPiramide;i++){
        for (j=0;j<i;j++){
            printf("%d ",numero[j]);
        }
        printf("\n");
    }
    return 0;
}