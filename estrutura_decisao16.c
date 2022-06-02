#include <stdio.h>

int main(){
    float x,y;
    printf("Digite as cordenadas x e y: ");
    scanf("%f%f",&x,&y);
    //na origem
    if ((x==0)||(y==0)){
        printf("Está na reta horizointal ou vertical da origem");
    }
    //1 ou 4 quadrante
    else{
        if (x>0){
            //1 quadrante
            if (y>0){
                printf("Está no primeiro quadrante\n");
            }
            //4 quadrante
            else{
                printf("Está no quarto quadrante\n");
            }
        }
        //2 e 3 quadrante
        else{
            //2 quadrante
            if (y>0){
                printf("Está no segundo quadrante\n");
            }
            //3 quadrante
            else{
                printf("Está no terceiro quadrante\n");
            }
        }
    }    
}