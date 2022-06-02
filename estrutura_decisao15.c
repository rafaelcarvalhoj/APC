#include <stdio.h>

int main(){
    int data_1_dia, data_1_mes, data_1_ano, data_2_dia, data_2_mes, data_2_ano;
    printf("Digite a primeira data: (ordem: dia, mes, ano)\n");
    scanf("%d%d%d",&data_1_dia,&data_1_mes,&data_1_ano);
    printf("Digite a segunda data: (ordem: dia, mes, ano)\n");
    scanf("%d%d%d",&data_2_dia,&data_2_mes,&data_2_ano);
    //anos iguais
    if (data_1_ano == data_2_ano){
        //meses iguais
        if (data_1_mes == data_2_mes){
            //datas iguais
            if (data_1_dia == data_2_dia){
                printf("As datas são iguais\n");
            }
            //data1 maior que data2
            else if (data_1_dia > data_2_dia){
                printf("A primeira data é maior");
            }
            //data1 menor que data2
            else {
                printf("A segunda data é maior");
            }
        }
        //data1 maior que data2
        else if(data_1_mes > data_2_mes){
            printf("A primeira data é maior");
        }
        //data1 menor que data2
        else{
            printf("A segunda data é maior");
        }
    }
    //data1 maior que data2
    else if(data_1_ano > data_2_ano){
        printf("A primeira data é maior");
    }
    //data1 menor que data2
    else{
        printf("A segunda data é maior");
    }
    return 0;
}