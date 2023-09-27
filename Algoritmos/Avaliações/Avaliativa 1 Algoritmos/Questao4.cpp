#include <stdio.h>

int main(){
	
char f;	
float s;

printf("Insira o nivel do funcionario (a,b ou c): ");
scanf("%c",&f);
printf("Insira o salario do funcionario: ");
scanf("%f",&s);
if (f=='a'){
s=s*1.05;
}else{
	if(f=='b'){
		s=s*1.07;
	}else{
		s=s*1.08;		
	}
}
printf("R$ %0.2f",s);
}
