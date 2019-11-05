#include <stdio.h>
#include <stdlib.h>
#include "ponto.h"

int main()
{
    float x,y;
    printf("Digite valores para X e Y: ");
    scanf("%f %f",&x,&y);
    PONTO *p1=criar(x,y);
    imprimir(p1);
    printf("Digite NOVOS valores para X e Y: ");
    scanf("%f %f",&x,&y);
    alterar(p1,x,y);
    imprimir(p1);
    liberar(p1);
    return 0;
}
