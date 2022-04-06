#include <stdio.h>

int main(void){
	int N1,N2,R1=0,R2;
	
	printf("Digite o numero: \n");
	scanf("%d",&N1);	
	if(N1>=1&&N1<=500);{
	
	N2=N1;
	do{
	R1=R1+1;
	N2=N2-1;
	R2=N2;
	
	if(R1%4==0&&R2%5==0){
	printf("Bingo!!\n");}
	else {
	 if(R1%5==0&&R2%4==0){
	printf("Bingo!!\n");}
	else {
	if(R1%4==0&&R1%4==0){
	printf("M4		M4\n");}
	else {
	if(R1%5==0&&R2%5==0){
	printf("M5		M5\n");}
	else {
	if(R1%4==0){
	printf("M4		%d\n",R2);}
	else {
	 if(R2%4==0){
	printf("%d		M4\n",R1);}
	else {
	 if(R1%5==0){
	printf("M5		%d\n",R2);}
	else {
	 if(R2%5==0){
	printf("%d		M5\n",R1);}
	else {
	printf("%d		%d\n",R1,R2);
	}}}}}}}}				
	}while (R1>=1&&R1<500&&R2>=1&&R2<=500);

}}
