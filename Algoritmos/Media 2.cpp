#include <stdio.h>
int main(){
	double a,b,c,media;
	
	printf("Nota A:");
	scanf("%lf",&a);
	
	printf("Nota B:");
	scanf("%lf", &b);

	printf("Nota C:");
	scanf("%lf", &c);
	
	media = (a*2 + b*3 + c*5)/10;
	printf("Media = %lf",media);
}


