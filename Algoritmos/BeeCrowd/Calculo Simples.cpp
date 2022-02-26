#include <stdio.h>

int main(){
	int cd1,nm1,cd2,nm2;
	double vl1,vl2;
	
	printf("Insira o codigo da peca 1: ");
	scanf("%d",&cd1);
	printf("Insira a quantidade de pecas 1: ");
	scanf("%d",&nm1);
	printf("Insira o valor da peca 1: ");
	scanf("%lf\n",&vl1);
	
	printf("Insira o codigo da peca 2: ");
	scanf("%d",&cd2);
	printf("Insira a quantidade de pecas 2 ");
	scanf("%d",&nm2);
	printf("Insira o valor da peca 2: ");
	scanf("%lf",&vl2);
	
	printf("Valor a pagar: R$ %0.2lf",nm1*vl1+nm2*vl2);
}