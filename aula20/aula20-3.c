#include <stdio.h>
#include <stdlib.h>
main(){
    int *p=NULL,n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&n);
    p = (int*)malloc(n*sizeof(int));
    if(p!=NULL)
        printf("Alocou na memoria\n");
    else
        printf("Nao alocou na memoria\n");
}
