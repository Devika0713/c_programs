#include<stdio.h>
#include<stdlib.h>
void main()
{
	float num1,num2,result=0;
	char op;
	printf("enter two numbers\n");
	scanf("%f%f",&num1,&num2);
	printf("enter the operator\n");
	scanf(" %c",&op);
	switch (op)
	{
		case '+':result=num1+num2;
		break;
		case '-':result=num1-num2;
		break;
		case '*':result=num1*num2;
		break;
		case '/':
		if(num2!=0)
			{
				result=num1/num2;
				break;
		
			}
		else
			{
				printf("result cannot be determined\n");
				exit(1);
			}
		default:
			printf("invalid operator");
			exit(1);
		
			
}
		printf("the result is %.2f%c%.2f=%.2f\n",num1,op,num2,result);




}

		
