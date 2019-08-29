#include <stdio.h>
//questao 53
main(){
    int n,i,j,f;
    printf("Digite o valor inteiro: ");
    scanf("%d",&n);
    for(i=1,f=1;i<=n;i++){
        for(j=0;j<i;j++){
            printf("%d ",f++);
        }
        putchar('\n');
    }
}
