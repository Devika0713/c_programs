#include<stdio.h>
void main()
{
	int a,b,c,d;
	
	printf("enter the value to be pre incremented \n");
	scanf("%d",&a);
	b=++a;
	printf("the pre incremented value is %d \n",a,b);
	printf("enter the value to be post incremented \n");
	scanf("%d",&c);
	d=c++;
	printf("the post incremented value is %d \n",c,d);
}

	
