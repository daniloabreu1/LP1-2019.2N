#include <stdio.h>
//questao 05 lista 08
void preencherVetor(int v[],int t){
    int i;
    for(i=0;i<t;i++){
         printf("Digite um valor ");
        scanf("%d",&v[i]);
    }
    putchar('\n');
}
void imprimirVetor(int v[],int t){
    int i;
    for(i=0;i<t;i++){
        printf("%d ",v[i]);
    }
    putchar('\n');
}
int numerosPares(int v[], int t){
    int i,p=0;
    for(i=0;i<t;i++){
        if(v[i]%2==0)
            p++;
    }
    return p;
}
main(){
    int v[10]={0};
    preencherVetor(v,10);
    imprimirVetor(v,10);
    printf("Numeros pares = %d\n",numerosPares(v,10));
}
