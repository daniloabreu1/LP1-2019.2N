#include <stdio.h>
#include <math.h>
//quest�o 05 lista 05
main(){
    int n,i;
    char c=167;//caractere na tabela ascii para apresentar o grau => �
    printf("DIGITE UM NUMERO ENTRE 100 E 999: ");
    scanf("%d",&n);
    if(n>=100 && n<=999){/*
        for(i=3; i>=1; i--){
            printf("%d%c ALGARISMO: %d\n",i,c,n%10);
            n=n/10;
        }
         OUTRA SOLU��O USANDO A BIBLIOTECA MATH.H; FUN��O POW => CALCULA POTENCIA; FUN��O CEIL => ARREDONDO O NUMERO PARA CIMA.
        */for(i=2;i>=0;i--){
            printf("%d\n",n/((int)ceil(pow(10,i))));
            n=n%((int)ceil(pow(10,i)));
        }
    }else{
        printf("NUMERO FORA DO INTERVALO");
    }
}
