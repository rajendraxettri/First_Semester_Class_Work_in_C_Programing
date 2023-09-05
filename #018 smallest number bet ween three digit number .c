#include<stdio.h>
#include<conio.h>

int main(){
	int a,b,c,d;
	
	printf("Enter 1 number :");
	scanf("%d",&a);
	
	printf("Enter 2 number :");
	scanf("%d",&b);
	
	printf("Enter 3 number :");
	scanf("%d",&c);
	
	printf("Enter 3 number :");
	scanf("%d",&d);
	
	if (a<b && a<c && a<d){
		printf("The first number is smallest number !");
	}
	else if(b<c && b<d){
		printf("The second number is smallest number !");
		
	}
	else if(c<d){
		printf("The Third number is smallest number !");
	}
	else{
		printf("The Fortth number is smallest number !");
	}
	
	return 0;
	
}
