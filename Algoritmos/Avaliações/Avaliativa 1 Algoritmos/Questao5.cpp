#include <stdio.h>

int main (){
	int n1,n2,maior,menor,mult;

printf("Digite o numero 1: ");
scanf("%d",&n1);
printf("Digite o numero 2: ");
scanf("%d",&n2);

if(n1>n2){
	maior=n1;
	menor=n2;
}else{
	maior=n2;
	menor=n1;
}

mult=maior%menor;

if(n1==n2){
	printf("Os valores lidos sao iguais");
}else{
	printf("%d eh maior que %d",maior,menor);
	if(mult==0){
		printf("\n%d eh multiplo de %d",maior,menor);
	}else{
		printf("\n%d nao eh multiplo de %d",maior,menor);
	}
}
}
