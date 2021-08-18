#include<stdio.h>
void main()
{
	int temp,a,b;
	printf("enter the value of a \n");
	scanf("%d",&a);
	printf("enter the value of b \n");
	scanf("%d",&b);
	temp=a;
	a=b;
	b=temp;

	printf("\n after swapping a=%d b=%d \n",a,b);
}

