#include <stdio.h>
main(){
    char c;
    do{
        printf("Digite um caractere para repetir");
        printf(" ou S para sair: ");
        setbuf(stdin, NULL);
        c=getchar();
        printf("caractere digitado = %c\n\n",c);
    }while(c!='S');
}
