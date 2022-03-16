#include <stdio.h>
#include <math.h>

int main (){
	float x1,x2,y1,y2;
	
	printf("Digite o X1 e Y1: \n");
	scanf("%f",&x1);
	scanf("%f",&y1);
	printf("Digite o X2 e Y2: \n");
	scanf("%f",&x2);
	scanf("%f",&y2);
	
	printf("%0.4f",sqrt(pow(x2-x1,2)+pow(y2-y1,2)));
}
