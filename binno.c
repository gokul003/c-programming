#include<stdio.h>
void main()
{	
	float a,b,c;
	printf("enter the number");
	scanf("%f",&a);
	printf("enter the number");
	scanf("%f",&b);
	printf("enter the number");
	scanf("%f",&c);
	if(a>b&&a>c)
		printf("a is greater%f",a);
	else if(b>a&&b>c)
		printf("b is greater%f",b);
	else
		printf("c is greater%f",c);
}
