#include <stdio.h>
#define PA 2
#define PB 3
#define PC 5

int main(){
	double notaA,notaB,notaC;
	
	printf("Nota A:");
	scanf("%lf",&notaA);
	
	printf("Nota B:");
	scanf("%lf", &notaB);

	printf("Nota C:");
	scanf("%lf", &notaC);
	
	printf("Media = %.2lf",(notaA*PA + notaB*PB + notaC*PC)/(PA+PB+PC));
}


