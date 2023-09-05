#include<stdio.h>
#include<conio.h>

int main(){
	int a,b=0;
	
	printf("Sum of odd number between 1 to 100 is:");
	for(a=1; a<=100; a=a+2){
		b+=a;
	}
	printf("\n%d",b);
	
	return 0;
}
