#ifndef TORRE_H
#define TORRE_H

#define MAX_DISCOS 100

typedef struct{
    int discos[MAX_DISCOS];
    int topo;
} Pilha;

void inicializar_pilha(Pilha *p);
int pilha_vazia(Pilha *p);
int pilha_cheia(Pilha *p);
void empilhar(Pilha *p, int disco);
int desempilhar(Pilha *p);
void mostrar_torres(Pilha *torres, int discos);
void mover_disco(Pilha *torres, int origem, int destino);
void reiniciar(Pilha *torres, int discos);
int concluir(Pilha *torres, int discos);

#endif

