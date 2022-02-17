#include <stdio.h>

int main(){
float notaA,notaB;
    
    printf("Digite a nota A: ");
    scanf("%f",&notaA);
    printf("Digite a nota B: ");
    scanf("%f",&notaB); 
   
   if ((notaA+notaB)/2>=9.5)
    printf("Aluno aprovado!");
    else printf("Aluno reprovado!");
}