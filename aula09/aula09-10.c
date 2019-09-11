#include <stdio.h>
int a,b;
void troca(void){
    int aux;
    aux=a;
    a=b;
    b=aux;
}
main(){
   scanf("%d %d",&a,&b);
   printf("antes da troca\n");
   printf("a = %d\nb = %d\n",a,b);
   troca();
   printf("depois da troca\n");
   printf("a = %d\nb = %d\n",a,b);
}
