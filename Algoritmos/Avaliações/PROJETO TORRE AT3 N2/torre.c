#include <stdio.h>
#include "torre.h"

void inicializar_pilha(Pilha *p){
    p->topo=-1;
}

int pilha_vazia(Pilha *p){
    return p->topo==-1;
}

int pilha_cheia(Pilha *p){
    return p->topo==MAX_DISCOS-1;
}

void empilhar(Pilha *p, int disco){
    if (!pilha_cheia(p)){
        p->discos[++p->topo]=disco;
    }
}

int desempilhar(Pilha *p){
    if (!pilha_vazia(p)){
        return p->discos[p->topo--];
    }
    return -1;
}

void mostrar_torres(Pilha *torres, int discos){
    for (int i=0; i<3; i++){
        printf("|Torre %d: ", i+1);
        for (int j=0; j<=torres[i].topo; j++){
            printf("%d ", torres[i].discos[j]);
        }
        printf("\n");
        printf("|\n"); 
    }
    printf("\n");
}

void mover_disco(Pilha *torres, int origem, int destino){
    if (pilha_vazia(&torres[origem])){
        printf("|Torre %d vazia.\n", origem+1);
        return;
    }

    if (!pilha_vazia(&torres[destino])&&torres[destino].discos[torres[destino].topo]<torres[origem].discos[torres[origem].topo]){
        printf("|Movimente outro disco. O menor deve estar na frente do maior\n");
        return;
    }

    int disco=desempilhar(&torres[origem]);
    empilhar(&torres[destino], disco);
}

void reiniciar(Pilha *torres, int discos){
    for (int i=0; i<3; i++){
        inicializar_pilha(&torres[i]);
    }
    for (int i=discos; i>0; i--){
        empilhar(&torres[0], i);
    }
}

int concluir(Pilha *torres, int discos){
    if (torres[2].topo==discos-1){
        for (int i=0; i<discos; i++){
            if (torres[2].discos[i]!=discos-i){
                return 0;
            }
        }
        return 1;
    }
    return 0;
}

