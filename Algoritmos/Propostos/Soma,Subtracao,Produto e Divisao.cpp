#include <stdio.h>
int main(){
	double valorA,valorB;
	
	printf("Valor A: ");
	scanf("%lf", &valorA);
	
	printf("Valor B: ");
	scanf("%lf", &valorB);
	
	printf("SOMA = %.1lf\n",valorA+valorB);
	printf("SUBTRACAO = %.1lf\n",valorA-valorB);
	printf("PRODUTO = %.1lf\n",valorA*valorB);
	printf("DIVISAO = %.1lf\n",valorA/valorB);
}
