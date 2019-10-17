#include <stdio.h>
main(){
    int n=48;
    int *p=&n;
    printf("%d\n",n);
    printf("%p\n",&n);
    printf("%p\n",p);
    printf("%p\n",&p);
    printf("%d\n",*p);
}
