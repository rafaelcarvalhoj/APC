#include <stdio.h>

int main(){
    float a,b,c,num;
    printf("Digite três números:\n");
    scanf("%f%f%f",&a,&b,&c);
    if (a > b){
        if (a > c){
            printf("a é o maior\n");
        }
        else {
            printf("c é o maior");
        }
    }
    else{
        if (b > c){
            printf("b é o maior\n");
        }
        else{
            printf("c é o maior\n");
        }
    }
    return 0;
}