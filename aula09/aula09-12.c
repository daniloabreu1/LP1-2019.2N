#include <stdio.h>
int soma(int n);

main(){
   int n;
   do{
    scanf("%d",&n);
    printf("soma = %d\n",soma(n));
   }while(n);
}
int soma(int n){
    static int s=0;
    s+=n;
    return s;
}
