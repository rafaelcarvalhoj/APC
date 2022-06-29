#include <stdio.h>


int varificarPrimo(int n){
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
    printf("Digite um numero inteiro para achar os numeros primos antes e depois dele.: ");
    scanf("%d",&n);
    numInicial = n;
    //varificar proximo primo maior que N
    if(n>0){
        do {
            varificarPrimo(n);
            n++;
        }while (varificarPrimo(n) != 2);
        printf("o proximo numero primo depois de %d eh %d\n",numInicial,n);
        // verificar proximo primo menor que n
        n = numInicial;
        if(n==1 || n==2){
            if (n==1){
                printf("nao existe numero primo antes de 1\n");
            }else{
                printf("o proximo numero primo antes de 2 eh 1\n");
            }
        }else {
            do {
                varificarPrimo(n);
                n--;
            }while (varificarPrimo(n) != 2);   
            printf("o proximo numero primo antes de %d eh %d\n",numInicial,n);
        }
    }else{
        printf("Numero invalido!\n");
    }
}
