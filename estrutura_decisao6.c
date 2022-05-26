#include <stdio.h>
#include <math.h>

int main(){
    double a,b,c,s,result;
    printf("Digite os lados dos triângulos:\n");
    scanf("%lf %lf %lf",&a,&b,&c);
    s = (a+b+c)/2;
    printf("%lf\n",s);
    printf("%lf\n",s-a);
    printf("%lf\n",s-b);
    printf("%lf\n",s-c);
    result = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("A area do triângulo é: %.3lf\n",result);
    return 0;
}