#include <stdio.h>

int main(){
	int num,hr;
	double valor,salario;
	
	printf("Insira o numero do funcionario: ");
	scanf("%d",&num);
	printf("Insira a quantidade de horas trabalhadas: ");
	scanf("%d",&hr);
	printf("Insira o valor do salario por hora: ");
	scanf("%lf",&valor);
	
	salario=hr*valor;
	
	printf("Numero = %d\n",num);
	printf("Salario = %lf\n",salario);
}