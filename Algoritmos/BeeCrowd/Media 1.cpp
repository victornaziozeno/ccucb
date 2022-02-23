#include <stdio.h>
#define PA 3.5
#define PB 7.5
int main(){
	double notaA,notaB;
	
	printf("Nota A:");
	scanf("%lf",&notaA);
	
	printf("Nota B:");
	scanf("%lf", &notaB);
	
	printf("Media = %.2lf",(notaA*PA + notaB*PB)/(PA+PB));
}
