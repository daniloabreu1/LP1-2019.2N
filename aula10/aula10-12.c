#include <stdio.h>

void preencherPalavra(char c[],int t){
    int i;
    for(i=0;i<t;i++){
        setbuf(stdin,NULL);
        printf("Digite uma letra ");
        scanf("%c",&c[i]);
    }
    putchar('\n');
}
void imprimirPalavra(char c[],int t){
    int i;
    for(i=0;i<t;i++){
        printf("%c",c[i]);
    }
    putchar('\n');
}
main(){
    int v[5]={0};
    char palavra[9]={'o','l','a',' ','m','u','n','d','o'};
    imprimirPalavra(palavra,9);
    preencherPalavra(palavra,9);
    imprimirPalavra(palavra,9);
}
