#include <stdio.h>
typedef union{
    int n;
    float f;
    char c;
}PONTO;
main(){
    PONTO p;
    p.n=4;
    printf("valor %d\n",p.n);
    printf("Valor %.3f\n",p.f);
    printf("Valor %c\n",p.c);
    p.f=3.15;
    printf("\nvalor %d\n",p.n);
    printf("Valor %.3f\n",p.f);
    printf("Valor %c\n",p.c);
    p.c='B';
    printf("\nvalor %d\n",p.n);
    printf("Valor %.3f\n",p.f);
    printf("Valor %c\n",p.c);
}
