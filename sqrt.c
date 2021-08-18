#include<stdio.h>
#include<math.h>
void main()
{
	float n,d,x;
	int s;
	printf("enter the number\n");
	scanf("%f",&n);
	if(n>=0)
		{
			for(s=1;s*s<=n;s++);
			s--;

			for(d=0.001;d<1.0;d=d+0.001)
			{
				x=s+d;
				if(x*x>n)
				{
				x=x-0.001;
				break;
				}
			}
		printf("the square root of %f=%f\n",n,x);
		printf("the square root using in built function of %f=%f",n,sqrt(n));
		}
		else
		{
			printf("invalid input");

	
}	
}
