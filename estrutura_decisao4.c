#include <stdio.h>

int main(){
    int x,y;
    printf("Digite um valor para x: ");
    scanf("%d",&x);
    printf("Digite um valor para y: ");
    scanf("%d",&y);
    x = x^y;
    y = x^y;
    x = x^y;
    printf("Agora o valor de x é %d\nE o de y é %d\n",x,y);
    return 0;
}