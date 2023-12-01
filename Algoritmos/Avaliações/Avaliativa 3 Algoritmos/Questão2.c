#include <stdio.h>
#include <math.h>

int main(){
    int mes;
    float ap, total, tax;
    
    scanf("%d", &mes);
    scanf("%f", &ap);
    scanf("%f", &tax);

    for (int i=1; i<=mes; i++){
        total=ap*(1+tax)*((pow(1+tax,i)-1)/tax) ;
        
        printf("Montante ao fim do mes %d: R$ %0.2lf\n", i, total);
    }

}
