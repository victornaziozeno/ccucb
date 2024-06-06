#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#include "musica.h"

//Função usada para alocar memória para as músicas a serem inseridas
Musica* adicionarMusica(char* artista, char* nome){
    Musica* novaMusica = (Musica*)malloc(sizeof(Musica));
    if(!novaMusica){
        printf("Nao foi possivel alocar memoria.\n");
        exit(1);
    }
    strcpy(novaMusica->artista,artista);
    strcpy(novaMusica->nome,nome);
    novaMusica->ant=NULL;
    novaMusica->prox=NULL;
    return novaMusica;
}

//Função usada para inserir uma nova música na playlist
void inserirMusica(Playlist* playlist, char* artista, char* nome){
    Musica* novaMusica=adicionarMusica(artista, nome);
    if(playlist->topo==NULL){
        playlist->topo=novaMusica;
        playlist->atual=novaMusica;
        novaMusica->ant=novaMusica;
        novaMusica->prox=novaMusica;
    }else{
        Musica* tail=playlist->topo->ant;
        tail->prox=novaMusica;
        novaMusica->ant=tail;
        novaMusica->prox=playlist->topo;
        playlist->topo->ant=novaMusica;
    }
}

//Função usada para comparar músicas de forma que possam ser ordenadas mais tarde
int compararMusicas(const void* a, const void* b){
    Musica* musicaA=*(Musica**)a;
    Musica* musicaB=*(Musica**)b;
    return strcmp(musicaA->nome, musicaB->nome);
}

//Função usada para mostrar as músicas da playlist na ordem em que estão na fila
void mostrarPlaylistAdicao(Playlist* playlist){
    if(playlist->topo==NULL){
        printf("Playlist vazia.\n");
        return;
    }
    Musica* atual=playlist->topo;
    do{

        printf("%s - %s\n\n", atual->artista, atual->nome);
        atual=atual->prox;
    } while (atual!=playlist->topo);
}

//Função usada para mostrar as músicas da playlist em ordem alfabética
void mostrarPlaylistAlfabetica(Playlist* playlist){
    if(playlist->topo==NULL){
        printf("Playlist vazia.\n");
        return;
    }

    int count=0;
    Musica* atual=playlist->topo;
    do{
        count++;
        atual=atual->prox;
    }while(atual!=playlist->topo);

    Musica** musicas=(Musica**)malloc(count * sizeof(Musica*));
    if(!musicas){
        printf("Nao foi possivel alocar memoria.\n");
        return;
    }
    
    atual=playlist->topo;
    for(int i=0; i<count; i++){
        musicas[i]=atual;
        atual=atual->prox;
    }

    qsort(musicas, count, sizeof(Musica*), compararMusicas);

    for(int i=0; i<count; i++){
        printf("%s - %s\n\n", musicas[i]->artista, musicas[i]->nome);
    }

    free(musicas);
}

//Função usada para abrir o arquivo musicas.txt, para utilização durante todo o programa
void carregarPlaylist(Playlist* playlist, const char* nomeArquivo){
    FILE* arquivo=fopen(nomeArquivo, "r");
    if(arquivo==NULL){
        printf("Nao foi possivel abrir o arquivo.\n");
        return;
    }
    char linha[256];
    while(fgets(linha, sizeof(linha), arquivo)){
        char* artista=strtok(linha, ";");
        char* nome=strtok(NULL, "\n");
        if(artista&&nome){
            inserirMusica(playlist, artista, nome);
        }
    }
    fclose(arquivo);
}

//Função utilizada para salvar as alterações realizadas (remoção e adição) no arquivo
void salvarPlaylist(Playlist* playlist, const char* nomeArquivo){
    FILE* arquivo=fopen(nomeArquivo, "w");
    if(arquivo==NULL){
        printf("Nao foi possivel abrir o arquivo.\n");
        return;
    }
    if(playlist->topo!=NULL){
        Musica* atual=playlist->topo;
        do{
            fprintf(arquivo, "%s;%s\n", atual->artista, atual->nome);
            atual=atual->prox;
        } while (atual!=playlist->topo);
    }
    fclose(arquivo);
}

//Função utilizada para avançar a música que está tocando na fila da playlist
void avancarMusica(Playlist* playlist){
    if(playlist->atual!=NULL){
        playlist->atual=playlist->atual->prox;
        printf("Musica tocando: %s - %s\n", playlist->atual->artista, playlist->atual->nome);
    }
}

//Função utilizada para retornar a música que está tocando na fila da playlist
void retornarMusica(Playlist* playlist){
    if(playlist->atual!=NULL){
        playlist->atual=playlist->atual->ant;
        printf("Musica tocando: %s - %s\n", playlist->atual->artista, playlist->atual->nome);
    }
}

//Função utilizada para deixar uma string em minúsculo, sendo utilizada durante a busca por nome da música
void deixarMinusculo(char* str){
    for(; *str; ++str){
        *str=tolower((unsigned char)*str);
    }
}


