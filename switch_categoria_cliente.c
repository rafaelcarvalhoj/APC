#include <stdio.h>

int main(){
    float preco, preco_final;
    char categoria;
    printf("Digite o preço do ingresso: ");
    scanf("%f", &preco);
    printf("E - estudante\n");
    printf("A - aposentado\n");
    printf("N - normal\n");
    printf("Digite a categoria do cliente (E/A/N): ");
    scanf(" %c", &categoria);
    switch (categoria){
        case 'e': case'E':
            preco_final = preco*0.50f;
            printf("Preco: %.2f\n",preco_final);
            break;
        case 'a':case'A':
            preco_final = preco*0.70f;
            printf("Preco: %.2f\n",preco_final);
            break;
        case'n':case'N':
            printf("Preco sem desconto: %.2f\n",preco);
            break;
        default:
            printf("Categoria invalida!\n");
            break;
    }

    return 0;
}