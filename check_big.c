#include<stdio.h>
void main()
{	
	int a,b,big;
	printf("enter the two numbers \n");
	scanf("%d%d",&a,&b);
	(a>b)?(big=a):(big=b);
	printf("biggest of two numbers= %d \n",big);
}
