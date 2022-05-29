#include <stdio.h>
int main(){
    float a,b,c;
    printf("Escreva tres numeros:\n");
    printf("a: ");
    scanf("%f",&a);
    printf("b: ");
    scanf("%f",&b);
    printf("c: ");
    scanf("%f",&c);
    if ((a>b)&&(b>c)){
        printf("c < b < a\n");
    }
    else if ((b>a)&&(a>c)){
        printf("c < a < b\n");
    }
    else if ((a>c)&&(c>b)){
        printf("b < a < c\n");
    }
    else if ((b>c)&&(c>a)){
        printf("a < c < b\n");
    }
    else if ((c>a)&&(a>b)){
        printf("b < a < c\n");
    }
    else{
        printf("a < b < c\n");
    }
    return 0;
}