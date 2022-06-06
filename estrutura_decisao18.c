#include <stdio.h>

int main(){
    float a,b;
    char opcao;
    printf("Escreva dois numeros:\n");
    scanf("%f %f",&a,&b);
    printf("Qual operacao voce quer realizar?\n(S)Soma\n(B)Subtracao\n(M)Multiplicacao\n(D)Divisao\n");
    scanf(" %s",&opcao);
    if ((opcao=='s')||(opcao=='S')){
        printf("%.2f + %.2f = %.2f",a,b,a+b);
    }else if ((opcao=='b')||(opcao=='B')){
        printf("%.2f - %.2f = %.2f",a,b,a-b);
    }
    else if ((opcao=='m')||(opcao=='M')){
        printf("%.2f * %.2f = %.2f",a,b,a*b);
    }
    else if ((opcao=='d')||(opcao=='D')){
        printf("%.2f / %.2f = %.2f",a,b,a/b);
    }
    else{
        printf("Essa opcao nao existe");
    }
    return 0;
}