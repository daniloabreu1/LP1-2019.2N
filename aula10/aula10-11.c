#include <stdio.h>

void imprimirVetor(int v[],int t){
    int i;
    for(i=0;i<t;i++){
        printf("%d ",v[i]);
    }
    putchar('\n');
}

void preencherVetor(int v[],int t){
    int i;
    for(i=0;i<t;i++){
        printf("Digite um valor ");
        scanf("%d",&v[i]);
    }
    putchar('\n');
}

main(){
    int v[5]={0};
    imprimirVetor(v,5);
    preencherVetor(v,5);
    imprimirVetor(v,5);
}
