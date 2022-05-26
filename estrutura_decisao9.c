#include <stdio.h>

int main(){
    int a;
    printf("Digite um número inteiro: ");
    scanf("%d",&a);
    if ((a%2 == 0) && (a > 10)){
        printf("SIM\n");
    }
    else if((a%2 !=0) && (a < 50)){
        printf("SIM\n");
    }
    else{
        printf("NAO\n");
    }
    return 0;
}