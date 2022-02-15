#include <stdio.h>
int main(){
	int a,b,c,d,x;
	
	printf("Numero A: ");
	scanf("%d", &a);
	
	printf("Numero B: ");
	scanf("%d", &b);
	
	printf("Numero C: ");
	scanf("%d", &c);
	
	printf("Numero D: ");
	scanf("%d", &d);
	
	x = a*b-c*d;
	printf("DIFERENCA = %d", x);
}
