#include <stdio.h>

int main(){
    int idade;
    printf("Informe sua idade:");
    scanf("%d",&idade);

    if(idade<=5){
        printf("bebe\n");
    }else if((idade>5) && (idade<=10)){
        printf("Crianca\n");
    }else if((idade>10)&&(idade<=18)){
        printf("Adolecente");
    }else if((idade>18)&&(idade<=50)){
        printf("Adulto");
    }else{
        printf("Idoso");
    }
    return 0;
}