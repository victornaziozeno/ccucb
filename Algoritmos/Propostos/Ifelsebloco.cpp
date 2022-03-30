#include <stdio.h>

int main(void){
	int idade=1;
while (1){
	printf("ELEITORAL\n\n");	
	printf("Digite sua idade: \n");	
	scanf("%d",&idade);
	
	if(idade<=0){
	printf("Idade Invalida\n\n");
	}else{
	if(idade<16){
	printf("Nao pode votar\n\n");
	}else{
	if(idade<18){
	printf("Opcional\n\n");
	}else{
	if (idade<65){
	printf("Obrigatorio\n\n");
	}else{
	if(idade==65){
	printf("Premio 1\n\n");
	}else{
	if (idade<82){
	printf("Obrigatorio\n\n");}
	if(idade==82){
	printf("Premio 2\n\n");
	}else{
	if (idade>82){
	printf("Opcional\n\n");}
return 0;
}}}}}}}}
