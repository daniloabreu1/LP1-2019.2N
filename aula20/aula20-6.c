#include <stdio.h>
#include <stdlib.h>
void salvar(int *v,int n){
    int i;
    putchar('\n');
    for(i=0;i<n;i++){
            printf("Valor >>> ");
            scanf("%d",&v[i]);
    }
}
void imprimir(int *v,int n){
    int i;
    for(i=0;i<n;i++){
            printf("%d ",v[i]);
    }
    putchar('\n');
}
int* alocar(int n){
    return (int*)calloc(n,sizeof(int));
}
main(){
    int *p=NULL,n,i;
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&n);
    putchar('\n');
    p = alocar(n);
    if(p!=NULL){
        imprimir(p,n);
        salvar(p,n);
        imprimir(p,n);
        free(p);
        imprimir(p,n);
    }
}
