#include<math.h>
#include<stdio.h>
void main()
{
	float a,b,c,root1,root2,disc,real,imag;
	printf("enter a,b,c values \n");
	scanf("%f%f%f",&a,&b,&c);
	if((a==0) && (b==0))
	{
		printf("roots cannot be determined");
	}
		else if(a==0)
		{
			printf("linear equaltion\n");
			root1=-c/b;
			printf("Root 1=%f",root1);

		}
	else
	{
		disc=((b*b)-(4*a*c));	
		if(disc==0)
		{
			printf("roots are real and equal\n");
			root1=root2=(b/(2*a));
			printf("Root 1=%f\n Root 2=%f\n",root1,root2);
		}
		else if(disc>0)
		{
			printf("Roots are real and disctinct\n");
			root1=(-b+sqrt(disc))/(2*a);
			printf("Root 1=%f\n Root 2=%f\n",root1,root2);
		}
		else
			{
				printf("Roots are real and imaginary\n");
				real=(-b/(2*a));
				imag=sqrt(fabs(disc)/(2*a));
				printf("Root 1=%f+i%f\n",real,imag);
				printf("Root 2=%f-i%f\n",real,imag);
			}
		}
	}

		
		
