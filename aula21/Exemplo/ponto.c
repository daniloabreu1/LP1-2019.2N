#include <stdio.h>
#include <stdlib.h>
#include "ponto.h"

struct ponto{
    float x,y;
};

PONTO* criar(float x,float y){
    PONTO *p = (PONTO*)malloc(sizeof(PONTO));
    if(p!=NULL){
        p->x=x;
        p->y=y;
    }
    return p;
}

void imprimir(PONTO *p){
    if(p!=NULL){
        printf("\nX = %.3f\n",p->x);
        printf("Y = %.3f\n",p->y);
    }else{
        printf("PONTO NAO ALOCADO\n");
    }
    putchar('\n');
}
void alterar(PONTO *p,float x,float y){
    if(p!=NULL){
        p->x=x;
        p->y=y;
    }
}
void liberar(PONTO *p){
    free(p);
}
