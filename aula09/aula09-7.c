#include <stdio.h>
int soma(int a, int b){
    return a+b;
}
main(){
   int a, b;
   scanf("%d %d",&a,&b);
   printf("SOMA = %d",soma(a,b));
}
