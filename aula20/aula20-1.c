#include <stdio.h>
#include <stdlib.h>
main(){
    int *p=NULL;
    p = (int*)malloc(5*sizeof(int));
    if(p!=NULL)
        printf("Alocou na memoria\n");
}
