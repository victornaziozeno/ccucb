#include <stdio.h>
#include <iostream>
#define X 10
int main() {
	double num[10],maior,menor;
	int i;
	
	printf("Digite 10 notas: \n");
	do {
	scanf("%lf",&num[i]);
	i++;
}while(i<10);

	maior=num[0];
	for (i=0;i<X;i++)
	if (num[i]>maior)
	maior = num[i];
	
	printf("Maior nota: %lf\n",maior);
	
	menor=num[0];
	for (i=0;i<X;i++)
	if (num[i]<menor)
	menor = num[i];
	
	printf("Menor nota: %lf",menor);
}
