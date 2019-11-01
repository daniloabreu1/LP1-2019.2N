#include <stdio.h>
#include <stdlib.h>
void salvar(int **v,int lin,int col){
    int i,j;
    for(i=0;i<lin;i++){
            for(j=0;j<col;j++){
                printf("Valor >>> ");
                scanf("%d",&v[i][j]);
            }

    }
}
void imprimir(int **v,int lin,int col){
    int i,j;
    for(i=0;i<lin;i++){
            for(j=0;j<col;j++){
                printf("%d ",v[i][j]);
            }
            putchar('\n');
    }
    putchar('\n');
}
int** alocar(int lin,int col){
    int **mat,i;
    mat=(int**)malloc(lin*sizeof(int*));
    for(i=0;i<lin;i++){
        mat[i]=(int*)calloc(col,sizeof(int));
    }

    return mat;
}
void liberar(int **m,int lin){
    int i;
    for(i=0;i<lin;i++){
        free(m[i]);
    }
    free(m);
}
main(){
    int **m,col, lin;
    printf("Digite a quantidade linhas e colunas: ");
    scanf("%d %d",&lin,&col);
    m=alocar(lin,col);
    if(m!=NULL){
        imprimir(m,lin,col);
        salvar(m,lin,col);
        imprimir(m,lin,col);
        liberar(m,lin);
        imprimir(m,lin,col);
    }
}
