#include<stdio.h>
#include<math.h>
void main()
{
	float area,a,b,c,s;
	printf("enter the sides of triangle \n");
	scanf("%f%f%f",&a,&b,&c);
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));

	
	printf("the area of the triangle is %f \n",area);
}

