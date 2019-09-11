#include <stdio.h>
void troca(int a,int b){
    int aux;
    aux=a;
    a=b;
    b=aux;
}
main(){
   int a,b;
   scanf("%d %d",&a,&b);
   printf("antes da troca\n");
   printf("a = %d\nb = %d\n",a,b);
   troca(a,b);
   printf("depois da troca\n");
   printf("a = %d\nb = %d\n",a,b);
}
