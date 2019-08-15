#include <stdio.h>
#include <conio.h>
main(){
    char c1,c2;
    printf("Digite um caractere >> ");
    c1= getche();
    printf("\nDigite um caractere >> ");
    c2= getch();
    putchar('\n');
    putchar(c1);
    putchar(c2);
}
