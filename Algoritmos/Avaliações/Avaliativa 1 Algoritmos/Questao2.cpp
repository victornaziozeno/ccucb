#include <stdio.h>

int main (){
int n,n1,num[11],tam,soma;	

scanf("%d",&n);
n1=n;
tam=sizeof(num)/sizeof(num[0]);
soma=0;

for (int i=0;i<tam;i++){

 num[i] = n % 10;

 n /= 10;

}

if(n1%2 ==0){
printf("%d eh par",n1);
}else{
printf("%d eh impar",n1);	
}

for (int i=0;i<tam;i++){
	soma=soma+num[i];

}
printf("\nA soma dos algarismos de %d eh ",n1);
printf("%d",soma);		
}

