#include <stdio.h>

int main(void)
{
	int a,i;
	scanf("%d",&a);
	
	for(i=1;i<=a;i++)
	{
		if(i%2!=0)
		{
			printf("THUMS THUMS THUMS\n");
		}
		
		if(i%2==0)
		{
			printf("THUMS THUMS THUMS THUMS THUMS THUMS\n");
		}
	}
	
	return 0;
}
