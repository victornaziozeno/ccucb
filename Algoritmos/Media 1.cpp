#include <stdio.h>
int main(){
	double notaA,notaB,media;
	
	printf("Nota A:");
	scanf("%lf",&notaA);
	
	printf("Nota B:");
	scanf("%lf", &notaB);
	
	media = (notaA*3.5 + notaB*7.5)/11;
	printf("Media = %.1lf",media);
}
