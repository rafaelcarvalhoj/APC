#include <stdio.h>

int main(){
    int numero,divisor,resto;
    printf("Digite um numero: ");
    scanf("%d",&numero);
    divisor = 1;
    while (divisor <= numero){
        resto = numero%divisor;
        if (resto == 0){
            printf("Divisor: %d\n",divisor);
        }
        divisor += 1;
    }
    return 0;
}