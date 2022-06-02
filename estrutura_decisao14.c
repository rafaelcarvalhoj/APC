#include <stdio.h>
 
int main(){
   float a,b,c;
   printf("Digite os três lados de um triângulo:\n");
   scanf("%f%f%f",&a,&b,&c);
   //equilatero
   if ((a==b)&&(a==c)){
       printf("É um triangulo equilatero\n");
   }
   //isoceles
   else if( ((a==b)&&(a!=c)) || ((a==c)&&(a!=b)) || ((c==b)&&(c!=a)) ){
       printf("É um triangulo isoceles\n");
   }
   //escaleno
   else{
       printf("É um triangulo escaleno\n");
   }
   return 0;
}