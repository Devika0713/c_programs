#include<stdio.h>
void main()
{
	int sum=0,i,n;
	printf("enter the value of n\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			sum=sum+i;
		}
	}
	printf("the sum of even numbers is %d",sum);

			

}

