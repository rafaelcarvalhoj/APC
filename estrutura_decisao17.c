#include <stdio.h>

int main(){
    char sexo;
    int idade, anos_contribuicao;
    printf("Para saber se voce ja pode se aposentar pelo INSS, digite seu sexo.\n(M) para masculino e (F) para feminino: ");
    scanf("%s",&sexo);
    printf("Insira sua idade: ");
    scanf("%d",&idade);
    printf("Insira os anos de contribuicao: ");
    scanf("%d",&anos_contribuicao);
    switch (sexo){
    case 'M': case'm':
        //masculino 65 10
        if ((idade >= 65)&&(anos_contribuicao>=10)){
            printf("Ja pode aposentar\n");
        }
        //masculino 63 15
        else if((idade >= 63)&&(anos_contribuicao>=15)){
            printf("Ja pode aposentar\n");
        }
        //masculino nao pode aposentar
        else{
            printf("Nao pode aposentar\n");
        }
        break;
    case 'F': case 'f':
        //feminino 63 10
        if ((idade >=63)&&(anos_contribuicao >= 10)){
            printf("Ja pode aposentar\n");
        }
        //feminono 61 15
        else if((idade >= 61)&&(anos_contribuicao >= 15)){
            printf("Ja pode aposentarz\n");
        }
        //femino nao pode aposentar
        else{
            printf("Nao pode aposentar\n");
        }
        break;
    //nao escolheu m ou fnm 
    default:
        printf("Esse sexo nao existe. Escolha entre Masculino(M) e Feminino(f)\n");
        break;
    }
    return 0;
}