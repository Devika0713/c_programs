#include<stdio.h>
void main()
{
	int n,r,i;
	long int ncr,x=1,y=1,z=1;
	printf("enter the value of n and r \n");
	scanf("%d%d",&n,&r);
	if(n>=r)
	{
		for(i=n;i>=1;i--)
		{
			x=x*i;
		}
		for(i=n-r;i>=1;i--)
		{
			y=y*i;
		}
		for(i=r;i>=1;i--)
		{
			z=z*i;
		}
		ncr=x/(y*z);
		printf(" %d C %d =%ld \n ",n,r,ncr);
	}
	else
	{
		printf("invalid input \n");
	}
}


	
