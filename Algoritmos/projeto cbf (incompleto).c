// Nome:Victor Naziozeno Gomes - Matrícula: UC21200106

#include <stdio.h>
#include <string.h>

#define TAM_CIDADE 120
#define MAX_PRE 100
#define MAX_JOGOS 450

struct Jogo{
int num;
double va;
char cidade[TAM_CIDADE];			 
};

int main(){

int i,j,jr,k,n,r,ctr,confir=1,qntd,tamanho,espaco_id;
char nome[MAX_PRE],aux,cidad[50];

FILE *nomec;
nomec = fopen("Nome.txt","w");
if(nomec==NULL){
printf("Erro na criacao do arquivo de nome do Presidente!");
return 1;
}

printf("Digite o nome do Presidente da CBF: \n");
fgets(nome,MAX_PRE,stdin);

aux=nome[0];

tamanho=strlen(nome);

for(i=0; i < tamanho; i++){

fputc(nome[i],nomec);

}
fclose(nomec);


struct Jogo jogos[MAX_JOGOS];

printf("Digite a quantidade de jogos a serem registrados: ");
scanf("%d",&qntd);

for (i=0;i<qntd;i++){

printf("\nDigite o ID do jogo %d: \n",i+1);
scanf("%d",&jogos[i].num);

if (jogos[i].num<300||jogos[i].num>10000){
printf("ID invalido (deve ser menor que 300 e maior que 10000)\n");
printf("\nDigite o ID do jogo %d: \n",i+1);
scanf("%d",&jogos[i].num);
}
if (jogos[i].num<300||jogos[i].num>10000){
printf("ID invalido (deve ser menor que 300 e maior que 10000)\n");
printf("\nDigite o ID do jogo %d: \n",i+1);
scanf("%d",&jogos[i].num);
}
printf("\nID do jogo %d digitado: %d\n",i+1,jogos[i].num);




printf("\nDigite o valor arrecadado do jogo %d: \n",i+1);
scanf("%lf",&jogos[i].va);
if (jogos[i].va<1000||jogos[i].va>1000000){
printf("Valor invalido (deve ser menor que R$10000 e maior que R$1000000)\n");
printf("\nDigite o valor arrecadado do jogo %d: \n",i+1);
scanf("%lf",&jogos[i].va);
}
if (jogos[i].va<1000||jogos[i].va>1000000){
printf("Valor invalido (deve ser menor que R$10000 e maior que R$1000000)\n");
printf("\nDigite o valor arrecadado do jogo %d: \n",i+1);
scanf("%lf",&jogos[i].va);
}
printf("\nValor do jogo %d arrecadado digitado: R$%0.2lf\n\n",i+1,jogos[i].va);




printf("Digite a Cidade do jogo %d: \n",i+1);
scanf("%s",&jogos[i].cidade);
if (jogos[i].cidade == NULL||jogos[i].cidade[TAM_CIDADE]>TAM_CIDADE){
printf("Valor invalido (deve ser menor que R$10000 e maior que R$1000000)\n");
printf("\nDigite o valor arrecadado do jogo %d: \n",i+1);
scanf("%lf",&jogos[i].va);
}
printf("\nCidade do jogo %d digitada: %s\n\n",i+1,jogos[i].cidade);

}

printf("------------------------------------------------------------------\n");
printf("Presidente da CBF: " );
printf("%c",toupper(aux));
for(i=1; i < tamanho; i++){
	
if(nome[i]==' '){
i++;
printf(" %c",toupper(nome[i]));
}else{
printf("%c",nome[i]);
}
}

for(i=0;i<qntd;i++){
for(j=i+1;j<qntd;j++){
 if(strcoll(jogos[i].cidade , jogos[j].cidade ) > 0 ){
    jogos->cidade[0]=jogos->cidade[i];
    jogos->cidade[i]=jogos->cidade[j];
    jogos->cidade[j]=jogos->cidade[0];

}
}
printf("-----------------------------------------------------------------------------------------------\n");
printf("JOGO\t|\t\tCidade\t\t|\tDinheiro Arrecadado\t\t|\tID\n");
for(i=0;i<qntd;i++){

printf("-----------------------------------------------------------------------------------------------\n");
printf("JOGO %d \t|\t\t%s\t\t|\t%0.2lf\t\t\t|\t%d\n",i+1,strlwr(jogos[i].cidade),jogos[i].va,jogos[i].num);
printf("-----------------------------------------------------------------------------------------------\n");
}
}
while(confir==1){
	
printf("Selecione a cidade para consultar os jogos nela: \n\n");


jr=strlen(jogos->cidade);

ctr=0;
j=0;
r=0;

for(i=0;i<jr;i++){
   
for(j=0,k=n; j<k+1; j++){
if (i!=j){
	
if(jogos->cidade[i]==jogos->cidade[j]){

ctr++;
}
}
}
if(ctr==0){	
printf("%s\n",jogos[i].cidade);
}

scanf("%s",&cidad);

printf("Jogos:  \n",cidad);
printf("-----------------------------------------------------------------------------------------------\n");
printf("JOGO\t|\t\tCidade\t\t|\tDinheiro Arrecadado\t\t|\tID\n");
for(i=0;i<jr;i++){

printf("-----------------------------------------------------------------------------------------------\n");
printf("JOGO %d \t|\t\t%s\t\t|\t%0.2lf\t\t\t|\t%d\n",i+1,strlwr(jogos[i].cidade),jogos[i].va,jogos[i].num);
printf("-----------------------------------------------------------------------------------------------\n");
}
printf("-----------------------------------------------------------------------------------------------\n");

printf("Deseja consultar outro jogo? 1 para Sim --- 2 para Nao\n");
scanf("%d",&confir);
if(confir==2){
break;
}
}

}
}




/*r=strcmp(jogos->cidade[i],jogos->cidade[j]);	
if (r>0){
strcopy(aux,jogos->cidade[i]);
strcopy(jogos->cidade[i],jogos->cidade[j]);
strcopy(jogos->cidade[j],aux);*/








//scanf("%s",&jogo1.nome);
//printf("%s", jogo1.nome);	
//printf("------------------------------------------------------------------\n");
//printf("Nome do presidente da CBF: ");
//printf("------------------------------------------------------------------\n");
