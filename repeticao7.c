#include <stdio.h>

int main(){
    int lista[10];
    int i;
    printf("Digite dez numeros:\n");
    //receber lista de numeros
    for (i=0;i<10;i++){
        scanf("%d",&lista[i]);
    }
    //comparar para ver se a lista está em ordem
    for (i=0;i<10;i++){
        if (lista[i] > lista[i+1]) {
            printf("nao\n");
            break;
        }else if (i==9){
            printf("Esta em ordem\n");
        }
    }
    return 0;
}