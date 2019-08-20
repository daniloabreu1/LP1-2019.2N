#include <stdio.h>
main(){
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d",&n);
    if(n>0){
        printf("Numero positivo\n");
    }else{
        if(n<0){
            printf("Numero negativo\n");
        }else{
            printf("Numero neutro\n");
        }
    }

}
