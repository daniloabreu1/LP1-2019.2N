#include <stdio.h>
#include <stdlib.h>
main(){
    int *p=NULL,n,i;
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&n);
    putchar('\n');
    p = (int*)malloc(n*sizeof(int));
    if(p!=NULL)
        {
          for(i=0;i<n;i++){
            printf("Valor >>> ");
            scanf("%d",&p[i]);
          }
          putchar('\n');
          for(i=0;i<n;i++){
            printf("%d ",p[i]);
          }
          putchar('\n');
        }
    else
        printf("Nao alocou na memoria\n");
}
