#include <stdio.h>
#include <math.h>

int main(){
    double x;
    printf("Digite um número X: ");
    scanf("%lf",&x);
    printf("O resultado da equacao é: %.3lf\n",sqrt(x)+(x/2)+pow(x,2));
    return 0;
}