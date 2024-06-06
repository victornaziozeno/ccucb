#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#include "musica.h"

//Função usada para remover uma música da playlist
void removerMusica(Playlist* playlist, char* nome){
    if(playlist->topo==NULL){
        printf("Playlist vazia.\n");
        return;
    }

    char nomeMin[100];
    strcpy(nomeMin, nome);
    deixarMinusculo(nomeMin);

    Musica* atual=playlist->topo;
    do{
        char nomeMusicaMinusculo[100];
        strcpy(nomeMusicaMinusculo, atual->nome);
        deixarMinusculo(nomeMusicaMinusculo);
        
        if(strcmp(nomeMusicaMinusculo, nomeMin)==0){
            if(atual==playlist->topo && atual->prox==playlist->topo){
                playlist->topo=NULL;
                playlist->atual=NULL;
            }else{
                if(atual==playlist->topo){
                    playlist->topo=atual->prox;
                }
                if(atual==playlist->atual){
                    playlist->atual=atual->prox;
                }
                atual->ant->prox=atual->prox;
                atual->prox->ant=atual->ant;
            }
            free(atual);
            salvarPlaylist(playlist, "musicas.txt");
            printf("Musica removida com sucesso.\n");
            return;
        }
        atual=atual->prox;
    }while(atual!=playlist->topo);
    printf("Musica nao encontrada.\n");
}

//Função usada para buscar uma música na playlist, seja maiúscula ou minúscula
void buscarMusica(Playlist* playlist, char* nome){
    if(playlist->topo==NULL){
        printf("Playlist vazia\n");
        return;
    }

    char nomeMin[100];
    strcpy(nomeMin, nome);
    deixarMinusculo(nomeMin);

    Musica* atual=playlist->topo;
    do{
        char nomeMusicaMinusculo[100];
        strcpy(nomeMusicaMinusculo, atual->nome);
        deixarMinusculo(nomeMusicaMinusculo);
        
        if(strcmp(nomeMusicaMinusculo, nomeMin)==0){
            printf("Musica encontrada: %s - %s\n", atual->artista, atual->nome);
            return;
        }
        atual=atual->prox;
    }while(atual != playlist->topo);
    printf("Musica não encontrada.\n");
}




int main(){
    Playlist playlist={NULL, NULL};
    carregarPlaylist(&playlist, "musicas.txt");

//Menu de interface para interação do usuário
    int opcao;
    do{
        printf("-------------------------------------\n");
        printf("\t\tMenu\n");
        printf("-------------------------------------\n");        
        printf("1. Exibir playlist (ordem de adicao)\n");
        printf("2. Exibir playlist (ordem alfabetica)\n");
        printf("3. Inserir nova musica\n");
        printf("4. Remover musica\n");
        printf("5. Buscar musica por nome\n");
        printf("6. Avancar para a proxima musica\n");
        printf("7. Retornar para a musica anterior\n");
        printf("8. Sair\n");
        printf("-------------------------------------\n");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
	               	
        printf("-------------------------------------\n");
        printf("Lista de Musicas (Ordem de Adicao)\n");
        printf("-------------------------------------\n");        
                mostrarPlaylistAdicao(&playlist);
                break;
            case 2:
        printf("-------------------------------------\n");
        printf("Lista de Musicas (Ordem Alfabetica)\n");
        printf("-------------------------------------\n");			            	
                mostrarPlaylistAlfabetica(&playlist);
                break;
            case 3:{
                char artista[100], nome[100];
                printf("Digite o nome do artista: ");
                scanf(" %[^\n]", artista);
                printf("Digite o nome da musica: ");
                scanf(" %[^\n]", nome);
                inserirMusica(&playlist, artista, nome);
                salvarPlaylist(&playlist, "musicas.txt");
                break;
            }
            case 4:{

                char nome[100];
                printf("Digite o nome da musica: ");
                scanf(" %[^\n]", nome);
                removerMusica(&playlist, nome);
                break;  
            }
            case 5:{
                char nome[100];
                printf("Digite o nome da musica: ");
                scanf(" %[^\n]", nome);
                buscarMusica(&playlist, nome);
                break;
            }
            case 6: 
                avancarMusica(&playlist);
                break;
            case 7:
            	retornarMusica(&playlist);
                break;  	

            case 8:
                printf("Encerrando programa.\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    }while(opcao!=8);

    return 0;
}

