#include <stdio.h>
main(){
    int x;
    printf("Digite um numero inteiro positivo ");
    scanf("%d",&x);
    while(x){
        printf("%d\n",x);
        x = x - 1;
    }
}
