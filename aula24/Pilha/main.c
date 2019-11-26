#include <stdio.h>
#include <stdlib.h>
#include "Pilha.h"
int menu(){
    int op;
    printf("\t\tPILHA DINAMICA\n");
    printf("\n1 - INSERIR ELEMENTOS\n");
    printf("2 - MOSTRAR ELEMENTOS DA PILHA\n");
    printf("3 - REMOVER ELEMENTOS\n");
    printf("4 - SAIR\n");
    printf("\nOPCAO: ");
    scanf("%d",&op);
    putchar('\n');
    return op;
}
main(){
    CONTROL *ctr = criarPilha();
    int o,dado;
    while((o=menu())!=4){
        switch(o){
        case 1:
            system("cls");
            printf("DIGITE UM NOVO NUMERO ");
            scanf("%d",&dado);
            inserirElemento(ctr,dado);//CHAMA A FUN��O QUE INSERE UM ELEMENTO NA PILHA. PAR�MENTROS: ENDERE�O DA PILHA CRIADA E OS DADOS DE ALUNOS RECEM DIGITADOS
            imprimirPilha(ctr);//CHAMA A FUN��O MOSTRAR. PAR�METRO: ENDERE�O DA PILHA CRIADA (ctr � UM PONTEIRO)
            break;
        case 2://OP��O QUE MOSTRA OS ELEMENTOS DA PILHA
            system("cls");
            imprimirPilha(ctr);//CHAMA A FUN��O MOSTRAR. PAR�METRO: ENDERE�O DA PILHA CRIADA (ctr � UM PONTEIRO)
            break;
        case 3://OP��O PARA REMO��O DO PRIMEIRO ELEMENTO DA PILHA.
            system("cls");
            removerElemento(ctr);//CHAMA A FUN��O DE REMO�AO. PAR�METRO: ENDERE�O DA PILHA CRIADA
            imprimirPilha(ctr);//CHAMA A FUN��O MOSTRAR. PAR�METRO: ENDERE�O DA PILHA CRIADA (ctr � UM PONTEIRO)
            break;
        case 4://OPCAO PARA TERMINAR O LA�O E SAIR DO PROGRAMA
            break;
        default:
            printf("OPCAO INVALIDA\n\n");
        }
        printf("\n\nPRESSIONE QUALQUER TECLA PARA CONTINUAR...\n\n");
        setbuf(stdin,NULL);
        getchar();
        system("cls");
    }
    liberarPilha(ctr);
}
