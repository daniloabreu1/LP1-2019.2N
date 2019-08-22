#include <stdio.h>
main(){
    int n;
    printf("CALCULADORA\n");
    printf("1 - PARA SOMAR\n");
    printf("2 - PARA SUBTRAIR\n");
    printf("3 - PARA MULTIPLICAR\n");
    printf("4 - PARA DIVIDIR\n");
    printf("5 - PARA SAIR\n");
    printf("DIGITE A OPCAO >>> ");
    scanf("%d",&n);
    switch(n){
        case 1:
            printf("somando...\n");break;
        case 2:
            printf("subtraindo...\n");break;
        case 3:
            printf("multiplicando...\n");break;
        case 4:
            printf("dividindo...\n");break;
        case 5:
            printf("saindo...\n");break;
        default:
            printf("opcao invalida...\n");
    }
}
