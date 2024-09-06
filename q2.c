// WAP to find out max from 4 number using naestd if.

#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j;
	
	printf("enter the number");
	scanf("%d",&i);
	
	printf("enter the number");
	scanf("%d",&j);
	
    int a[i][j];
    
    for(i=1; i<=5; i++)
    {
    	for(j=1; j<=5; j++)
    	{
    		printf("enter the value",i,j);
		}
		printf("/n");
	}
	
	for(i=0; i<5; i++)
    {
    	for(j=0; j<5; j++)
    	{
    		printf("enter the a[i][j]",i,j);
		}
		printf("/n");
	}
	
}
