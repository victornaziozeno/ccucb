#include <stdio.h>

int main(){
    
    int valorA,valorB,valorC,valorD;
    
    printf("Insira o valor A: ");
    scanf("%d",&valorA);
    
    printf("Insira o valor B: ");
    scanf("%d",&valorB);
    
    printf("Insira o valor C: ");
    scanf("%d",&valorC);
    
    printf("Insira o valor D: ");
    scanf("%d",&valorD);

    if(valorB>valorC&&valorD>valorA&&valorC+valorD>valorA+valorB&&valorC>0&&valorD>0&&valorA%2==0)
        printf("Valores aceitos!");
        else printf("Valores nao aceitos!");
}