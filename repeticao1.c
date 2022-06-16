#include <stdio.h>

int main(){
    int opcao = 0;
    while(opcao!=5){
        printf("Escolha um dos pratos:\n(1)Prato 1\n(2)Prato 2\n(3)Prato 3\n(4)Prato 4\n(5)Sair do menu\n");
        scanf("%d",&opcao);
    }
    return 0;
}