#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
	char p1[]="1qaz2wsx", u1[]="rajendra", p2[20],u2[20];
	int sum1,sum2,sum=0,num=0;
	
	do{
	
	
	if(num<5){
		printf("-----------Log In-----------");
	printf("\nEnter Your User Name:\n");
	gets(u2);
	printf("Enter Your Password:\n");
	gets(p2);

	
	if((strcmp(u1,u2)==0 )&&(strcmp(p1,p2)==0)){
		system("cls");
		sum=sum+1;
		printf("\nLogin Successfully !");
	}
	else{
		num=num+1;
		
		printf("\nSorry Try Again  !\n\n\n");
		system("cls");
	}
	}
	
	else{
		num=num+1;
		printf("\nTry after 28 Second...................");
	}
}while(sum==0&&num<6);


return 0;	
	
	
	
}
