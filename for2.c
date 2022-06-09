#include <stdio.h>
#include <string.h>

int main(void){
	char chave[50];
    char lista[13][4]={
        "O1P",
        "O2P",
        "O3P",
        "O4P",
        "O5P",
        "O6P",
        "O7P",
        "O8P",
        "O9P",
        "10P",
        "11P",
        "12P",
        "13P",

    };
	int i;
    printf("Informe qual chave você procura: ");
    scanf("%s",&chave[0]);
    for(i=0;i<13;i++){
        if(strcmp(lista[i],chave)==0){
            printf("chave encontrada e posicao: %d\n",i+1);
            break;
        }
    }
	return 0;
}