#include <stdio.h>
linhas(char c,int lin, int col){
    int i,j;
    for(i=0;i<lin;i++){
            for(j=0;j<col;j++){
                printf("%c",c);
            }
        putchar('\n');
    }
}
main(){
    int v;
    v=linhas('-',7, 5);
    printf("%d",v);
}
