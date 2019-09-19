#include <stdio.h>
#include <string.h>
main(){
    char palavra[11];
    printf("Digite um texto ");
    gets(palavra);
    printf("Texto %s\nComprimento %d",palavra,strlen(palavra));
}
