#include <stdio.h>
main(){
    int n=48;
    int *p=&n,*px;
    printf("%d\n",n);
    printf("%p\n",&n);
    printf("%p\n",p);
    printf("%p\n",&p);
    printf("%p\n",&px);
    px=&n;
    printf("%p\n",px);
    printf("%d\n",*p);
}
