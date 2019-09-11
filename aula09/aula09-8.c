#include <stdio.h>
int imparPar(int n){
    if(n%2==0)
        return 1;
    return 0;
}
main(){
   int a;
   scanf("%d",&a);
   imparPar(a)?printf("par\n"):printf("impar\n");
}
