#include<stdio.h>
void main()
{
	int a,b,add,sub,multi,div;
	printf("enter the two numbers \n");
	scanf("%d%d",&a,&b);
	add=a+b;
	sub=a-b;
	multi=a*b;
	div=a/b;
	printf("the sum of two numbers is %d \n",add);
	printf("the difference of two numbers is %d \n",sub);
	printf("the product of two numbers is %d \n",multi);
	printf("the quotient of two numbers is %d \n",div);
}
