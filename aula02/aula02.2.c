#include <stdio.h>
//questao 01 lista 02
main(){
    char n1, n2, n3;
    printf("Digite tres caracteres:\n");
    scanf("%c",&n1);
    setbuf(stdin,NULL);
    scanf("%c",&n2);
    setbuf(stdin,NULL);
    scanf("%c",&n3);
    printf("Valores na tabela ASCII\n");
    printf("Inteiro\tCaractere\n");
    printf("%d\t%c\n",n1,n1);
    printf("%d\t%c\n",n2,n2);
    printf("%d\t%c\n",n3,n3);

}
