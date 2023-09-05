#include<stdio.h>
#include<conio.h>
int main(){
	int first[5],third[5], second[5],i,j;
	printf("Enter First Matrix :");
	for (i=0; i<=4; i++){
		scanf("%d",&first[i]);
	}
	printf("Enter Second Matrix : ");
	for(i=0; i<=4; i++){
		scanf("%d", &second[i]);
	}
	for(i=0; i<=4; i++){
		third[i]=first[i]+second[i];	
	}
	printf("The Sum of Two matrix is :");
	for (i=0; i<=4; i++){
		printf("%d",third[i]);
		printf(" \n");
}}
