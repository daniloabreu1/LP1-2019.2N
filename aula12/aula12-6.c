#include <stdio.h>
#include <string.h>
main(){
    char palavra[11];
    printf("Digite um texto ");
    gets(palavra);
    printf("Texto %s\nComprimento %d\n",palavra,strlen(palavra));
    printf("%d\n",strcmp(palavra,"Casa"));
    puts(strcat(palavra,"TEXTO"));
    puts(strupr(palavra));
    puts(strlwr(palavra));
    int i;
    for(i=0;i<strlen(palavra);i++){
        printf("%c\n",palavra[i]);
    }
}
