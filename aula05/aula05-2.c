#include <stdio.h>
main(){
    int n=0, x;
    printf("Digite um numero inteiro ");
    scanf("%d",&x);
    while(n<=10){
        printf("%2d x %2d = %2d\n",x,n,x*n);
        n = n + 1;
    }
}
