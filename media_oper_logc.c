#include <stdio.h>

int main(){
    int idade;
    printf("Digite sua idade: \n");
    scanf("%d",&idade);
    if ((idade > 18) && (idade>=0)){
        printf("Não possui habilitacao\n");
    }
    else if ((idade>=16)&&(idade<65)){
        printf("Renove exames a cada 5 anos.\n");
    }
    else if(idade >= 65){
        printf("Renove exames a cada 3 anos.");
    }
    return 0;
}