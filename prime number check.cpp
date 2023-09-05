#include<stdio.h>
#include<conio.h>

int main(){
	
	int n,a=0,i,j;
	
	printf("Enter A number : ");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++){
		
		if(n%i==0){
			a++;
		}
	}
	
	if(a==2){
		printf("It is Prime !");
	}
	else{
		printf("It is not Prime !");
	}
	
	return 0;
	
	
	
}
