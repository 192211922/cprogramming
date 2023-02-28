#include<stdio.h>
main()
{
	int rev(int);
	int r,a;
	printf("Enter any number: ");
	scanf("%d",&a);
	r = rev(a);
	printf("Square is: %d",r);
}
int rev(int x)
{
	return(x*x);
}
