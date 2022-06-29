#include <stdio.h>

int main(){
  int tamLista,i,intervalo1=0,intervalo2=0,intervalo3=0,intervalo4=0;
  printf("Digite o tamanho da sequencia de numeros:");
  scanf("%d",&tamLista);
  int n[tamLista];
  for(i=0;i<tamLista;i++){
      printf("Digite o %d° numero: ",i+1);
      scanf("%d",&n[i]);
  }
  for (i=0;i<tamLista;i++){
    //checar se o numero faz parte de algum do conjuntos
      
      //primeiro intervalo[0...25]
      if ((n[i]>=0)&&(n[i]<=25)){
          ++intervalo1;
      }
      //segundo intervalo[26...50]
      else if ((n[i]>=26)&&(n[i]<=50)){
          ++intervalo2;
      }
      //terceiro intervalo[51...75]
      else if ((n[i]>=51)&&(n[i]<=75)){
          ++intervalo3;
      }
      //terceiro intervalo[76...100]
      else if ((n[i]>=76)&&(n[i]<=100)){
          ++intervalo4;
      }
  }
  //mostrar quantos numeros tem em cada conjunto
  printf("intervalo[0...25]: %d\n",intervalo1);
  printf("intervalo[26...50]: %d\n",intervalo2);
  printf("intervalo[51...75]: %d\n",intervalo3);
  printf("intervalo[76...100]: %d\n",intervalo4);
}
