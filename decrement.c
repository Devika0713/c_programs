#include<stdio.h>
void main()
{
	int a,b,c,d;
	
	printf("enter the value to be pre decremented \n");
	scanf("%d",&a);
	b=--a;
	printf("the pre decremented value is %d \n",a,b);
	printf("enter the value to be post decremented \n");
	scanf("%d",&c);
	d=c--;
	printf("the post decremented value is %d \n",c,d);
}

	
