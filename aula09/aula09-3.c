#include <stdio.h>
linhas(int lin, int col, char c){
    int i,j;
    for(i=0;i<lin;i++){
            for(j=0;j<col;j++){
                printf("%c",c);
            }
        putchar('\n');
    }
}
main(){
    linhas(4, 5,'-');
}
