#include<stdio.h>
int lcm(int a,int b);
main()
{
	int a,b;
	int prime[100];
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	printf("LCM of %d and %d is %d",a,b,lcm(a,b));
}

int lcm(int a,int b)
{
	static int common=1;
	if((common%a==0) && (common%b==0))
	{
		return common;
	}
	common++;
	lcm(a,b);
	return common;
}
