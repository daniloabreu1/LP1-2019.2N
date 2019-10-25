#include <stdio.h>
struct aluno{
    char nome[30];
    float n1, n2;
}a1={"Maria Jose",7.5,8.5},a2;

main(){
    printf("Nome: %s\n",a1.nome);
    printf("Nota 1: %.2f\nNota 2: %.2f\n",a1.n1,a1.n2);
}
