#include <stdio.h>

int main(){
    int numeroA, numeroB, resto;
    printf("Digite d0is números(em ordem crescente): ");
    scanf("%d %d",&numeroA,&numeroB);
    while (numeroA > 0){
        resto = numeroB%numeroA;
        numeroB = numeroA;
        numeroA = resto;
    }
    printf("MDC: %d\n",numeroB);
    return 0;
}