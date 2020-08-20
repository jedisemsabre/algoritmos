#include <stdio.h>

int main(void)
{
	int xm,ym,xr,yr,a,b,total;
	
	scanf("%d %d %d %d",&xm,&ym,&xr,&yr);
	a=xr-xm;
	b=yr-ym;
	total=a+b;
	printf("%d\n",total);
	
	return 0;
	
}