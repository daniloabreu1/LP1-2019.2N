#include <stdio.h>
typedef struct{
    char rua[30],num[9],bairro[30],cidade[35];
} END;

typedef struct{
    char nome[30];
    float n1, n2;
    END e;
}ALUNO;

void imprimir(ALUNO a1){
    printf("Nome: %s\n",a1.nome);
    printf("Nota 1: %.2f\nNota 2: %.2f\n",a1.n1,a1.n2);
    printf("Rua: %s",a1.e.rua);
    printf(", %s\n",a1.e.num);
    printf("Bairro: %s - ",a1.e.bairro);
    printf("%s\n\n",a1.e.cidade);
}

void gravar(ALUNO *a1){
    setbuf(stdin,NULL);
    printf("\nDigite o nome do aluno: ");
    gets(a1->nome);
    printf("Digite duas notas: ");
    scanf("%f %f",&a1->n1,&a1->n2);
    setbuf(stdin,NULL);
    printf("Nome da rua: ");
    gets(a1->e.rua);
    printf("Numero: ");
    gets(a1->e.num);
    printf("Bairro: ");
    gets(a1->e.bairro);
    printf("Cidade: ");
    gets(a1->e.cidade);
    putchar('\n');
}
main(){
    ALUNO a1={"Maria Jose",7.5,8.5,{"S/N","S/N","Centro","C"}};
    imprimir(a1);
    gravar(&a1);
    imprimir(a1);
}
