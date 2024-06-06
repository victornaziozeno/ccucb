#ifndef MUSICA_H
#define MUSICA_H

//Declara��o da estrutura das m�sicas
typedef struct Musica{
    char artista[100];
    char nome[100];
    struct Musica* ant;
    struct Musica* prox;
}Musica;

//Declara��o da estrutura da fila
typedef struct{
    Musica* topo;
    Musica* atual;
}Playlist;


//Declara��o das fun��es utilizadas em musica.c
Musica* adicionarMusica(char* artista, char* nome);
void inserirMusica(Playlist* playlist, char* artista, char* nome);
void mostrarPlaylistAdicao(Playlist* playlist);
int compararMusicas(const void* a, const void* b);
void mostrarPlaylistAlfabetica(Playlist* playlist);
void carregarPlaylist(Playlist* playlist, const char* nomeArquivo);
void salvarPlaylist(Playlist* playlist, const char* nomeArquivo);
void avancarMusica(Playlist* playlist);
void retornarMusica(Playlist* playlist);
void deixarMinusculo(char* str);

#endif

