#include <stdio.h>
int main(){
    char opcao;
    float t, t_final;
    printf("Você quer a temperatura em Celcius ou em fahrenheit?\nDigite (C) para Celcius e (F) para Fahrenheit:\n");
    scanf(" %c",&opcao);
    switch(opcao){
        case 'f': case'F':
        printf("Agora digite a temperatura em Celcius: ");
        scanf("%f",&t);
        t_final = t*1.8+32;
        printf("A temperatura %.f° Celcius em Fahrenheit é %.2f\n",t,t_final);
        break;
        case 'c': case'C':
        printf("Agora digite a temperatura em Fahrenheit: ");
        scanf("%f",&t);
        t_final = (t-32)*(5/9);
        printf("A temperatura %.f° Fahrenheit em Celcius é %.2f\n",t,t_final);
        break;
    }
    return 0;
}