#include <stdio.h>
int main(){
	double a,b,media;
	
	printf("Nota A:");
	scanf("%lf",&a);
	
	printf("Nota B:");
	scanf("%lf", &b);
	
	media = (a*3.5 + b*7.5)/11;
	printf("Media = %lf",media);
}
