#include <stdio.h>

int main(){
    int n,resto,i;
    printf("Digite um numero: ");
    scanf("%d",&n);
    for(i=1;i<n;i++){
        resto = n%i;
        if ((resto==0)&&(i>2)){
            printf("Divisor: %d\n",i);
        }
    }
    return 0;
}