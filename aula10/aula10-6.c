#include <stdio.h>
main(){
    int v[5]={0};
    printf("%d\n",v[0]);
    printf("%d\n",v[1]);
    printf("%d\n",v[2]);
    printf("%d\n",v[3]);
    printf("%d\n",v[4]);

    v[2]=567;
    v[4]=2;
    v[0]=v[2]*v[4];
    printf("%d\n",v[0]);
    printf("%d\n",v[1]);
    printf("%d\n",v[2]);
    printf("%d\n",v[3]);
    printf("%d\n",v[4]);
}
