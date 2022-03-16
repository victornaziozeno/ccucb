#include <stdio.h>

int main(){
	int idade;
	char nome[50],sexo[20];
	float altura;
	
	printf("Informe seu nome: ")/
	scanf("%[^\n]s",&nome);
	printf("Informe sua idade: ")/
	scanf("%d",&idade);
	printf("Informe seu sexo: ")/
	scanf("%s",&sexo);
	printf("Informe sua altura: ")/
	scanf("%f",&altura);
	
	printf("Nome: %s\n",nome);
	printf("Idade: %d\n",idade);
	printf("Sexo: %s\n",sexo);
	printf("Altura: %f\n",altura);
}
