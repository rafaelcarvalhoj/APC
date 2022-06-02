#include <stdio.h>

int main(){
    int numero = 1;
    do {
        printf("%d ",numero);
        numero += 1;
    }while (numero <= 10);
    printf("\nnumero final é: %d\n",numero);
    return 0;
}