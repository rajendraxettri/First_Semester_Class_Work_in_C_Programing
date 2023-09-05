#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10][10],b[10][10],mul[10][10],i,j,k,sum;
	printf("enter the first matrix=");
	for(i=0;i<3;i++)
	{
	  for(j=0;j<3;j++)
	  {
	    scanf("%d",&a[i][j]);
	  }
    }
    printf("enter the second matrix=");
	for(i=0;i<3;i++)
	{
	  for(j=0;j<3;j++)
	  {
	    scanf("%d",&b[i][j]);
	  }
    }
    printf("First matrix=\n");
    for(i=0;i<3;i++)
	{
	  for(j=0;j<3;j++)
	  {
	    printf("\t%d",a[i][j]);
	  }
	  printf("\n");
    }
    printf("second matrix=\n");
    for(i=0;i<3;i++)
	{
	  for(j=0;j<3;j++)
	  {
	    printf("\t%d",b[i][j]);
	  }
	  printf("\n");
    }
    //multiplication logic
    for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		sum=0;
    		for(k=0;k<3;k++)
    		{
    			sum=sum+a[i][k]*b[k][j];
			}
			mul[i][j]=sum;
		}
	}
	printf("The multiplication of two matrix=\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d",mul[i][j]);
		}
		printf("\n");
	}
	return 0;
}


