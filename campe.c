#include <stdio.h>

int main(void)
{
	int a,b,c,maior,menor;
	scanf("%d %d %d",&a,&b,&c);
	if(a>b && a>c)
	{
		maior=a;
	}
	if (b>a && b>c)
	{				
		maior=b;	
	}
	if(c>a && c>b)
	{
		maior=c;
	}
	if(a<b && a<c)
	{
		menor=a;
	}
	if (b<a && b<c)
	{				
		menor=b;	
	}
	if(c<a && c<b)
	{
		menor=c;
	}
	if(c!=maior&&c!=menor)
	{
		printf("%d",c);
	}
	else if(b!=maior && b!=menor)
	{
		printf("%d",b);
	}
	else if(a!=maior && a!=menor)
	{
		printf("%d",a);
	}
	return 0;
}