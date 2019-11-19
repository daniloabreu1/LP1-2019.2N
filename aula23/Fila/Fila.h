#ifndef FILA_HEADER
#define FILA_HEADER
typedef struct aluno{
    char nome[31];
    int mat;
    float n1, n2;
} ALUNO;
typedef struct elemento ELEM;
typedef struct controlador FILA;
FILA* criarFila();
void inserirElemento(FILA *fila,ALUNO a);
void removerElemento(FILA *fila);
void mostrarFila(FILA *fila);
int contarElementos(FILA *fila);
void liberarFila(FILA *fila);
void novoAluno(ALUNO *a);
#endif // FILA_HEADER
