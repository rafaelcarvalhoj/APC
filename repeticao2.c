#include <stdio.h>

int main(){
    int a,b,i,x;
    printf("Digite dois numeros: ");
    scanf("%d %d",&a,&b);
    x = a;
    if (b==0){
        printf("resultado: 1\n");
    }else if(b==1){
        printf("resultado: %d\n",a);
    }else{
        for(i=1;i<b;i++){
        x = x*a;
        }
        printf("resultado: %d\n",x);
    }
    return 0;
}