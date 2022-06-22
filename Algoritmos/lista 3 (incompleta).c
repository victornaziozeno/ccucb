//Nome: Victor Naziozeno Gomes
//Matrícula: UC21200106

#include <stdio.h>

struct Piloto{
	char nome,pais,sexo;
	int idade,id;
	
};

struct Circuito{
	int cs,pid;
	char nome,tempo,pais;
	float km;
	
};

struct Melhorvolta{
	int pid,id;
	char eqp,data,tempo;
	
};


int main(){
	
	int i,j,tam,tamp=1;
	char con={'S'};
	
	
		tam=1;
	struct Piloto piloto[tam];
	

	while(con=='S'){
		for (i=0;i<tam;i++){
		
		printf("Piloto %d\n\n",i+1);
		do{
			
		printf("Digite o Codigo de Identificacao do Piloto(DE 100 A 500): ");
		scanf("%d",&piloto[i].id);
	}while(piloto[i].id<100||(piloto[i].id>500));	
		
		printf("Digite o Nome do Piloto: ");
		scanf("%s",&piloto[i].nome);
				
		printf("Digite a Idade em anos do Piloto: ");
		scanf("%d",&piloto[i].idade);
		while(piloto[i].sexo){
		printf("Digite o Sexo do Piloto (M para masculino ou F para feminino): ");
		scanf("%s",&piloto[i].sexo);
		if(piloto[i].sexo=='F'||(piloto[i].sexo=='M')){
		break;
		}else{
	printf("Sexo invalido, digite M ou F \n");
		}
	}	
		printf("Digite o Pais do Piloto: ");
		scanf("%s",&piloto[i].pais);
			
	printf("Deseja cadastrar outro piloto?\n");
	printf("S ou N: ");
	scanf("%s",&con);
	printf("\n");
	if(con=='S'){
		tam++;
	}
	}
	}

}
