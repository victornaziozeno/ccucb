#include <stdio.h>
#include "torre.h"

int main(){
    Pilha torres[3];
    int discos, movimentos;
    int origem, destino;
    char opcao;

    printf("|--------------------------------------------------------------------------------\n");
    printf("|Digite o numero total de discos: ");
    scanf("%d", &discos);

    if (discos<1||discos>MAX_DISCOS){
        printf("|Numero invalido. Insira um numero entre 1 e %d.\n", MAX_DISCOS);
        return 1;
    }

    reiniciar(torres, discos);

    while (1){
    	
    	if (concluir(torres, discos)){
            printf("|O jogo foi concluido, obrigado por jogar!");
            reiniciar(torres, discos);
            return 0;
        }
    	
        printf("|--------------------------------------------------------------------------------\n");
        printf("|Digite o numero que representa a torre de origem e a torre de destino (de 1 a 3)\n");
        printf("|Voce pode digitar 'r' a qualquer momento para reiniciar o jogo.\n");
        printf("|--------------------------------------------------------------------------------\n");   
        printf("|\n"); 
		printf("|Movimentos realizados: %d\n",movimentos); 
		printf("|\n"); 
		  
        mostrar_torres(torres, discos);
        
        scanf(" %c", &opcao);
       
		
        if (opcao=='r'){
            reiniciar(torres, discos);
            movimentos=0;
        }else{
            origem=opcao-'1';
            scanf("%d", &destino);
            destino--;
			movimentos++;
			
            if (origem>=0&&origem<3&& destino>=0&&destino<3){
                mover_disco(torres, origem, destino);
            }else{
                printf("|Torre invalida.\n");
            }
        }
    }

    return 0;
}

