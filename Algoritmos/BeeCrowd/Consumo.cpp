#include <stdio.h>

int main (){
	int a;
	float b;
	
	printf("Digite a distancia percorria(em km): ");
	scanf("%d",&a);
	printf("Digite o total de combustivel gasto: ");
	scanf("%f",&b);
	
	printf("Consumo medio = %0.3f km/l",a/b);
}
