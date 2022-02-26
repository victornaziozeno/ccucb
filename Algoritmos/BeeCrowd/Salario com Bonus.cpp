#include <stdio.h>

int main(){
	char nome[100];
	double vendas,salario,comissao;
	
	printf("Insira o nome do funcionario: ");
	scanf("%s",&nome);
	printf("Insira o salario fixo: ");
	scanf("%lf",&salario);
	printf("Insira o valor total das vendas no mes: ");
	scanf("%lf",&vendas);
	
	comissao=vendas*0.15;
	
	printf("Total = %0.2lf",comissao+salario);
}