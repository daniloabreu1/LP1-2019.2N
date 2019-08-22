#include <stdio.h>
main(){
    char n;
    int r=1;
    printf("Digite S ou N ");
    scanf("%c",&n);
    r = n=='s'?r*5:(n=='n'?r*7:r*0);
    printf("valor de r %d\n",r);
}
