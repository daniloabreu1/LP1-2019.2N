#include <stdio.h>
main(){
    int i,v[5]={0};
    for(i=0;i<5;i++){
        printf("%d\n",v[i]);
    }
    v[2]=567;
    v[4]=2;
    v[0]=v[2]*v[4];

    for(i=0;i<5;i++){
        printf("%d\n",v[i]);
    }

    for(i=0;i<5;i++){
        printf("Digite um valor ");
        scanf("%d",&v[i]);
    }

    for(i=0;i<5;i++){
        printf("%d\n",v[i]);
    }
}
