#include<stdio.h>
void main()
{	
	int sum=0,i=0;
	top:if(i>10)
		goto end;
	sum=sum+i;
	i++;
	goto top;
	end:printf("sum=%d\n",sum);
}
