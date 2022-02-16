#include <stdio.h>
int main(){
	double valorA,valorB,prod,soma,subt,divs;
	
	printf("Valor A: ");
	scanf("%lf", &valorA);
	
	printf("Valor B: ");
	scanf("%lf", &valorB);
	
	prod = valorA*valorB;
	soma = valorA+valorB;
	subt = valorA-valorB;
	divs = valorA/valorB;
	
	printf("SOMA = %.1lf\n", soma);
	printf("SUBTRACAO = %.1lf\n", subt);
	printf("PRODUTO = %.1lf\n", prod);
	printf("DIVISAO = %.1lf\n", divs);
}
