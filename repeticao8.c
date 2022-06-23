#include <stdio.h>

int main(){
    int a,b,i,restoA,restoB;
    printf("Digite dois numeros: \n");
    scanf("%d %d",&a,&b);
    i = b;
    //criar laço de repeticao
    do{
        //comparar resto com if
        restoA = a%i;
        restoB = b%i;
        if ((restoA==0)&&(restoB==0)){
            //se o resto da divisao for 0, imprimir ele na tela
            printf("Divisor: %d\n",i);
            break;
        }
        i--;
    }while(i!=0);   
    return 0;
}