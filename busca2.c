#include <stdio.h>
#include <string.h>

int main(void){
	char lista[3][20];
	int i,found=0;
	char busca[100];
	
	printf("Digite os nomes: \n");
	for (i=0;i<3;i++){
		gets(lista[i]);
	}
	
	
	printf("\n\nOs nomes sao: \n");
	for(i=0;i<3;i++){
		printf("%s\n",lista[i]);
	}
	
	printf("Digite um nome para a busca: ");
	gets(busca);
	for (i=0;i<3;i++){
		if(strcmp(lista[i],busca)==0){
			printf("Encontrou o nome: %s",lista[i]);
			found = 1;
		}
	}
	
	if (!found){
		printf("Nome nao encontrado\n");
	}
	return 0;
}
