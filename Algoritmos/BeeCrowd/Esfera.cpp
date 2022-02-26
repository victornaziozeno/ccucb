#include <stdio.h>
#include <math.h>

#define pi 3.14159

int main(){
	double raio;
	
	printf("Insira o valor o raio:  ");
	scanf("%lf",&raio);
	
	printf("VOLUME = %0.3lf",(4/3.0)*pi*pow(raio,3));
}