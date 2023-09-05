#include<stdio.h>
#include<conio.h>

int main(){
	int bp,sp,tp;
	
	printf("Enter Your Purchase Price :");
	scanf("%d",&bp);
	
	printf("Enter Your Sells Price : ");
	scanf("%d",&sp);
	
	tp=sp-bp;
	
	if(bp<sp){
		printf("Your get Profit ! Rs.%d",tp);
		
	}
	else{
		printf("Sorry you get Loss ! Rs.%d",tp);
	}
	return 0;
}
