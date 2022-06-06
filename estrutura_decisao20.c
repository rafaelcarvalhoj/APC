#include <stdio.h>

int main(){
    int jogada, n=0,a,b,c,d,e,f,g,h,i;
    char opcao;
    a=1;b=1;c=1;d=1;e=1;f=1;g=1;h=1,i=1;
    printf("Jogo da velha:\nX = 2 e O = 0\n\n");
    printf("a   b   c\nd   e   f\ng   h   i\n\n");
    do{
        ++n;
        printf("Voce ainda tem %d jogadas\n",10-n);
        printf("Em que lugar voce quer jogar?");
        scanf("%s",&opcao);
        printf("X ou O?(digite 2 para X e 0 para O)");
        scanf("%d",&jogada);
        switch(opcao){
            case 'a':
                if (jogada == 2){
                    a = 2;
                }
                else{
                    a = 0;
                }
                break;
            case 'b':
                if (jogada == 2){
                    b = 2;
                }
                else{
                    b = 0;
                }
                break;
            case 'c':
                if (jogada == 2){
                    c = 2;
                }
                else{
                    c = 0;
                }
                break;
            case 'd':
                if (jogada == 2){
                    d = 2;
                }
                else{
                    d = 0;
                }
                break;
            case 'e':
                if (jogada == 2){
                    e = 2;
                }
                else{
                    e = 0;
                }
                break;
            case 'f':
                if (jogada == 2){
                    f = 2;
                }
                else{
                    f = 0;
                }
                break;
            case 'g':
                if (jogada == 2){
                    g = 2;
                }
                else{
                    g = 0;
                }
                break;
            case 'h':
                if (jogada == 2){
                    h = 2;
                }
                else{
                    h = 0;
                }
                break;
            case 'i':
                if (jogada == 2){
                    i = 2;
                }
                else{
                    i = 0;
                }
                break;
        }
        printf("%d   %d   %d\n%d   %d   %d\n%d   %d   %d\n\n\n\n",a,b,c,d,e,f,g,h,i);  
    }while(n<9);
    if ((a==b&&a==c)||(a==d&&a==g)||(c==f&&c==i)||(h==g&&h==i)||(g==e&&e==c)||(a==e&&a==i)){
        printf("Velha!\n\n");
    }else{
        printf("indefinido");
    }
    return 0;
}