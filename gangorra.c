#include <stdio.h>

int main(void)
{
	int p1,c1,p2,c2;
	
	scanf("%d %d %d %d",&p1,&c1,&p2,&c2);
	
	if(p1*c1==p2*c2)
	{
		printf("0");
	}
	if(p1*c1>p2*c2)
	{
		printf("-1");

	}
	if (p2*c2>p1*c1)
	{
		printf("1");
	}
	return 0;
}