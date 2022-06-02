#include <stdio.h>

int main(){
    int numeroA,numeroB,resto;
    printf("Digite dois numeros(em ordem crescente) para calcular o MDC: ");
    scanf("%d %d", &numeroA, &numeroB);
    do{
        resto = numeroB%numeroA;
        numeroB = numeroA;
        numeroA = resto;
    //numero = numero+1; -> numero++
    //numero = numero-1; -> numero--
    }while(numeroA>0);
    printf("MDC é: %d\n",numeroB);
    return 0;
}