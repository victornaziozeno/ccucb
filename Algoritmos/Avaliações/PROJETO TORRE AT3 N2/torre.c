#include <stdio.h>
#include "torre.h"

//Função que inicializa a pilha definindo o topo como -1
void inicializar_pilha(Pilha *p){
    p->topo=-1;
}

//Função que verifica se a pilha está vazia para validações dentro do código
int pilha_vazia(Pilha *p){
    return p->topo==-1;
}

//Função que verifica se a pilha está cheia para evitar que discos sejam inseridos além do limite 
int pilha_cheia(Pilha *p){
    return p->topo==MAX_DISCOS-1;
}

//Função que insere um disco no topo da pilha
void empilhar(Pilha *p, int disco){
    if (!pilha_cheia(p)){
        p->discos[++p->topo]=disco;
    }
}

//Função que remove um disco do topo da pilha
int desempilhar(Pilha *p){
    if (!pilha_vazia(p)){
        return p->discos[p->topo--];
    }
    return -1;
}

//Função que mostra a situação atual das torres na interface
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

//Função que move o disco da torre de origem para a torre de destino
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

//Função que reinicia as torres para o estado inicial, fazendo com que o jogo comece do 0
void reiniciar(Pilha *torres, int discos){
    for (int i=0; i<3; i++){
        inicializar_pilha(&torres[i]);
    }
    for (int i=discos; i>0; i--){
        empilhar(&torres[0], i);
    }
}

//Função que verifica se o jogo foi concluido
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

