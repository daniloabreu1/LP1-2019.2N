#include <stdio.h>
#include <stdlib.h>
main(){
    int *p=NULL;
    p = (int*)malloc(15000000000);
    if(p!=NULL)
        printf("Alocou na memoria\n");
    else
        printf("Nao alocou na memoria\n");
}
