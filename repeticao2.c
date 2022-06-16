#include <stdio.h>

int main(){
    int a,b,x;
    printf("Digite dois numeros inteiros:");
    scanf("%d %d",&a,&b);
    int contador = 1;
    x = a;
    while (contador < b){
        if(b==0){
            a = 1;
            break;
        }else if(b==1){
            break;
        }else{
        a = a * x;
        ++contador;
        }
    }
    printf("resultado: %d\n",a);
    return 0;
}