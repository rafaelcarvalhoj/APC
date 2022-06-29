#include <stdio.h>


int varificarPrimo(int n){
    //++n;
    int i,resto;
    int qntDivisores = 0;
    for(i=1;i<=n;i++){
        resto = n%i;
        if (resto == 0){
            qntDivisores++;
        }
    }
    return qntDivisores;
}

int main(){
    int n,numInicial;
    printf("Digite um numero inteiro: ");
    scanf("%d",&n);
    numInicial = n;
    //varificar proximo primo maior que N
    do {
        varificarPrimo(n);
        n++;
    }while (varificarPrimo(n) != 2);
    printf("o proximo numero primo depois de %d eh %d\n",numInicial,n);
    // verificar proximo primo menor que n
    n = numInicial;
    do {
        if (n == 1){
            printf("Nao existe numero primo antes de %d\n",numInicial);
            break;
        }
        varificarPrimo(n);
        n--;
    }while (varificarPrimo(n) != 2);
    if (n!=1){
        printf("o proximo numero primo antes de %d eh %d\n",numInicial,n);
    }
}