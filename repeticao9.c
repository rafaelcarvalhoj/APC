#include <stdio.h>

int main(){
    int x,y;
    int i=0;
    printf("Digite um numero: \n");
    scanf("%d",&x);
    //imprimir o proximo numero primos depois de n
        //achar numero primo depois de n
    for(y=x;i<y;y++){
        //verificar se y é primo
        for (i==2;i<(y/2);i++){
            if((y%i)==0){
                printf("nao é primo");
                break;
            }
        }
    }
}