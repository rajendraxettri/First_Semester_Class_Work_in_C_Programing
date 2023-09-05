#include<stdio.h>
#include<conio.h>

int main(){
	
	int a[5],b[4][4],c[4][4],i,j,k,temp;
	
	printf("Enter First matrix : ");
	for(i=0; i<5; i++){
	
			scanf("%d",&a[i]);
		
	}
	
	for(i=0; i<5; i++){
	for(j=0; j<5; j++){
	for(k=0; k<5; k++){
				if(a[i]>a[k+1]){
		
				temp=a[i];
				a[i]=a[k+1];
				a[k+1]=temp;
				
			}

	}
	}
		
		}
	
	
	printf("The sum of two matrix is : \n");
	
	for(i=0; i<5; i++){
	
			printf("%d\t",a[i]);
		
	
		
	}
	
	return 0;
}
