#include <stdio.h>
#include <math.h>

int main(){
    float raio;
    printf("Insira  o raio: ");
    scanf("%f",&raio);
    printf("Perimetro = %.3f\nArea = %.3f\n", M_PI*2*raio, M_PI*pow(raio,2));
    return 0;
}