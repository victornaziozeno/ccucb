#include <stdio.h>
#include <math.h>

#define pi 3.14159
int main(){
	double a,b,c;
	
	printf("Insira o valor A:  ");
	scanf("%lf",&a);
	printf("Insira o valor B:  ");
	scanf("%lf",&b);
	printf("Insira o valor C:  ");
	scanf("%lf",&c);
	
	printf("TRIANGULO = %0.3lf\n",a*c/2);
	printf("CIRCULO = %0.3lf\n",pi*pow(c,2));
	printf("TRAPEZIO = %0.3lf\n",(a+b)*c/2);
	printf("QUADRADO = %0.3lf\n",pow(b,2));
	printf("RETANGULO = %0.3lf\n",a*b);
}