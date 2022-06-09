#include <stdio.h>

int main(void){
	char[3] lista[12];
	char chave;
	int i;	
	lista[0]="01P";
	lista[1]="02P";
	lista[2]="03P";
	lista[3]="04P";
	lista[4]="05P";
	lista[5]="06P";
	lista[6]="07P";
	lista[7]="08P";
	lista[8]="09P";
	lista[9]="10P";
	lista[10]="11P";
	lista[11]="12P";
	lista[12]="13P";
	
	printf("Informe a chave: ");
	scanf("%s",&chave);
	
	for(i = 0 ; i < 10 ; i++){
		if (chave == lista[i]){
			break;
		}
	}
	
	if (i < 10){
		printf("Posicao da chave: %d\n", i);
	} else{
		printf("Posicao da chave: -1\n");
	}
	return 0;
}
