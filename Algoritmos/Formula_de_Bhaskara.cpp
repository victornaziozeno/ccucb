#include <stdio.h>
#include <math.h>

int main(){
	
 double valorA,valorB,valorC,d,delta,x1,x2;
 
 printf("Insira o valor A: ");
 scanf("%lf",&valorA);
 
 printf("Insira o valor B: ");
 scanf("%lf",&valorB);
 
 printf("Insira o valor C: ");
 scanf("%lf",&valorC);
 
 delta=pow(valorB,2)-4*valorA*valorC;
 
 x1=(valorB*-1+sqrt(delta))/(2*valorA);
 x2=(valorB*-1-sqrt(delta))/(2*valorA);
 
 if (delta>0&&valorA!=0)
 printf("X1 = %.5lf\nX2 = %.5lf\n",x1,x2);

else printf("Impossivel calcular");

}