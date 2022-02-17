#include <stdio.h>
#define NT 9.5
#define FQ 75
int main(){
float notaA,notaB,freq;
    
    printf("Digite a nota A: ");
    scanf("%f",&notaA);
    printf("Digite a nota B: ");
    scanf("%f",&notaB);
    printf("Digite a frequencia: ");
    scanf("%f",&freq);
   
   if ((notaA+notaB)/2>=NT&&freq>=FQ)
    printf("Aluno aprovado!");
    else printf("Aluno reprovado!");
}
