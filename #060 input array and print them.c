#include<stdio.h>
#include<conio.h>

int main(){
	int num[5][5],i,j;
	
	printf("Enter Five Number For Matrix :");
	
	for(i=0; i<=4; i++){
		for(j=0, j<=4; j++){
			scanf("%d",&num[i]);
		}
	}
	
	for(i=0; i<=4; i++){
		for(j=0, j<=4; j++){
			printf("%d",&num[i]);
		}
	}
	return 0;
}
