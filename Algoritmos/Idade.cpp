#include <stdio.h>

int main(){
    
    int idade;
    
    printf("Insira a idade: ");
    scanf("%d",&idade);
    
    if(idade>0&&idade<=10)
    printf("Crianca");
    else if(idade>10&&idade<18)
    printf("Adolescente");
    else if(idade>=18&&idade<60)
    printf("Adulto");
    else if(idade>=60&&idade<100)
    printf("Idoso");
    else if(idade>=100&&idade<150)
    printf("Zumbi");
    else printf("Idade invalida");

}