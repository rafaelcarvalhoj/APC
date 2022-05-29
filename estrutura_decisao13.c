#include <stdio.h>
int main(){
    int ano;
    printf("Digite um ano qualquer: ");
    scanf("%d",&ano);
    if (((ano%4) == 0)||((ano%400)==0)){
        printf("Esse ano é bisesxto\n");
    }
    else{
        printf("Esse ano não é bissexto\n");
    }
    return 0;
}