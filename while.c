#include <stdio.h>

int main(){
    int numero = 1;
    while (numero < 10){
        printf("%d\n",numero);
        numero += 1;
    }
    printf("numero final é %d\n",numero);
    return 0;
}