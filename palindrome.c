#include<stdio.h>
void main()
{
	int n,num,rev=0,rem;
	printf("Enter the number to be reversed\n");
	scanf("%d",&num);
	if(num>0)
	{
		n=num;
		while(num !=0)
			{
			rem=num%10;
			rev=rev*10+rem;
			num=num/10;
			}
		printf("the reversed number is %d\n",rev);
		if(n == rev)
		
		printf("the number is palindrome %d\n",n);
		
		else
		
		printf("the number is not palindrome\n");
	       }
		else
		{
		printf("invalid input");
       	 	}
}

