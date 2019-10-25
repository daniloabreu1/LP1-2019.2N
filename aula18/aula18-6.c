#include <stdio.h>
typedef struct{
    char nome[30];
    float n1, n2;
}ALUNO;

void imprimir(ALUNO a1){
    printf("Nome: %s\n",a1.nome);
    printf("Nota 1: %.2f\nNota 2: %.2f\n",a1.n1,a1.n2);
}

void gravar(ALUNO *a1){
    setbuf(stdin,NULL);
    printf("\nDigite o nome do aluno: ");
    gets(a1->nome);
    printf("Digite duas notas: ");
    scanf("%f %f",&a1->n1,&a1->n2);
    putchar('\n');
}
main(){
    ALUNO a1={"Maria Jose",7.5,8.5};
    imprimir(a1);
    gravar(&a1);
    imprimir(a1);
}
