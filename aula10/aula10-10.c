#include <stdio.h>

void imprimirVetor(int v[],int t){
    int i;
    for(i=0;i<t;i++){
        printf("%d\n",v[i]);
    }
    putchar('\n');
}

main(){
    int i,v[5]={0};
    imprimirVetor(v,5);
    v[2]=567;
    v[4]=2;
    v[0]=v[2]*v[4];
    imprimirVetor(v,5);
    for(i=0;i<5;i++){
        printf("Digite um valor ");
        scanf("%d",&v[i]);
    }
    imprimirVetor(v,5);
}
