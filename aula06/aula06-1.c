#include <stdio.h>
main(){
    int min,max,aux,i,j;
    printf("Digite o valor min e max: ");
    scanf("%d %d",&min,&max);
    if(min>max){
        aux=min;
        min=max;
        max=aux;
    }
    for(i=min;i<=max;i++){
        for(j=0;j<=10;j++){
            printf("%2d x %2d = %2d\n",i,j,i*j);
        }
        putchar('\n');
    }
}
