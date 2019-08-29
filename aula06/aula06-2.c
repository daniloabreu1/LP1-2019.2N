#include <stdio.h>
main(){
    int n,i,j;
    printf("Digite o valor inteiro: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=0;j<i;j++){
            printf("*");
        }
        putchar('\n');
    }
}
