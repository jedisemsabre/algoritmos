#include <stdio.h>
int main(void)
{
	int x,y,f1=0,f2=0;
	scanf("%d %d",&x,&y);
	
	if(x>=0&&x<=432)
	{
		f1=1;
	}
	if(y>=0&&y<=468)
	{
		f2=1;
	}
	if(f1==1&&f2==1)
	{
		printf("dentro\n");
	}
	else
	{
		printf("fora\n");
	}
}
