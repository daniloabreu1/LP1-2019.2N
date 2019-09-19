#include <stdio.h>
#include <string.h>
main(){
    char palavra[4][21]={"bom dia", "ola mundo","aula de lp1","quinta-feira"};
    int i;
    for(i=0;i<4;i++){
        printf("%s\n",palavra[i]);
    }
}
