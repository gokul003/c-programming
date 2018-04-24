#include<stdio.h>
#include<ctype.h>\
int main()
{
int a;
pritnf("enter the number");
scanf("%d",&a);
if(a%4==0&&a&100!=0&&a&400==0)
{
printf("leap year");
}
else()
{
printf("not a leap year");    
}
    
return 0;    
}
