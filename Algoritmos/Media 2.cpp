#include <stdio.h>
int main(){
	double notaA,notaB,notaC,media;
	
	printf("Nota A:");
	scanf("%lf",&notaA);
	
	printf("Nota B:");
	scanf("%lf", &notaB);

	printf("Nota C:");
	scanf("%lf", &notaC);
	
	media = (notaA*2 + notaB*3 + notaC*5)/10;
	printf("Media = %lf",media);
}


