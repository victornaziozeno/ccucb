#include <stdio.h>

int main (){
	int senha,senhac=1,tent;
tent=4;	
printf("Cadastre sua senha: ");

while (senha<1000||senha>9999){
printf("\nA senha deve possuir 4 digitos: ");
printf("\nCadastre sua senha: ");
scanf("%d", &senha);
	
}
printf("\nSenha cadastrada: %d",senha);

do{
printf("\n\nConfirme sua senha: ");
printf("\n(%d tentativas restantes)\n", tent);
tent=tent-1;
scanf("%d",&senhac);
if(senhac!=senha){
	printf("Senha invalida!");
}else{
	printf("Senha valida!");
}	
	
}while(senhac!=senha);


}
