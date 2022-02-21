#include <stdio.h>
#include <math.h>

int main(){
    int formula;
    double a,b,valorA,valorB,valorC,delta,x1,x2;
    
    printf("Insira:\n1 para Soma\n2 para diferenca\n3 para produto\n4 para divisao\n5 para area do circulo\n6 para media ponderada\n7 para Bhaskara\n : ");
    scanf("%d",&formula);
    
    switch(formula){
        
        case 1:
	
	        printf("Numero 1: ");
	        scanf("%lf", &a);
	
	        printf("Numero 2: ");
	        scanf("%lf", &b);
	
	        printf("SOMA = %lf",a+b);break;
	
        case 2:
	
	        printf("Numero 1: ");
	        scanf("%lf", &a);
	
	        printf("Numero 2: ");
	        scanf("%lf", &b);   
	    
	        printf("DIFERENCA = %lf",a-b);break;
	    
        case 3:
	
	        printf("Numero 1: ");
	        scanf("%lf", &a);
	
	        printf("Numero 2: ");
	        scanf("%lf", &b);
	
	        printf("PRODUTO = %.2lf",a*b);break;
	        
        case 4:
	
	        printf("Numero 1: ");
	        scanf("%lf", &a);
	
	        printf("Numero 2: ");
	        scanf("%lf", &b);
	
	        printf("DIVISAO = %.2lf",a/b);break;
        
        case 5: double r;
	
	        printf("Raio: ");
	        scanf("%lf",&r);
	
	        printf("AREA = %lf",pow(r,2)*3.14159);break;
        
        
        case 6: 
        
	    double valorA,valorB,pesoA,pesoB;
	
	        printf("Valor A:");
	        scanf("%lf",&valorA);
	
	        printf("Valor B:");
	        scanf("%lf", &valorB);
	
	        printf("Peso A:");
	        scanf("%lf",&pesoA);
	
	        printf("Peso B:");
	        scanf("%lf", &pesoB);
	        
	        printf("Media = %.2lf",(valorA*pesoA + valorB*pesoB)/(pesoA+pesoB));break;
	        
	    case 7:
 
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

            else printf("Impossivel calcular");break;

            default: printf("Numero Invalido");
    }

}
