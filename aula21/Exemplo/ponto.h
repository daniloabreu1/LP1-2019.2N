#ifndef PONTO_HEADERS
#define PONTO_HEADERS
typedef struct ponto PONTO;
PONTO* criar(float x,float y);
void imprimir(PONTO *p);
void alterar(PONTO *p,float x,float y);
void liberar(PONTO *p);
#endif // PONTO_HEADERS
