#include<stdio.h>
main()
{
	int a,b,c,d,e,f,g,h;
	printf("enter the first subject mark:");
	scanf("%d",&a);
	printf("enter the second subject mark:");
	scanf("%d",&b);
	printf("enter the third subject mark:");
	scanf("%d",&c);
	printf("enter the fourth subject mark:");
	scanf("%d",&d);
	e=(a+b+c+d)/4;
	printf("the score is %d",e);
	if(e>75)
	{
		printf("the grade is distinction");
	}
	else if(e>=60 &&e<=75)
	{
		printf("the grade is first class");
	}
	else if(e>=50 &&e<60)
	{
		printf("the grade is second class");
	}
	else if(e>40 &&e<50)
	{
		printf("the grade is third class");
	}
	else
	{
		printf("fail");
	}
}
