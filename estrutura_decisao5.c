#include <stdio.h>

int main(){
    double b,h;
    printf("Digite o valor da base: ");
    scanf("%lf",&b);
    printf("Digite o valor da altura: ");
    scanf("%lf",&h);
    printf("O valor da area é %.3lf\n",(b*h)/2);
    return 0;
}