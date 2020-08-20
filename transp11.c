#include <stdio.h>

int main(void)
{
	int a,b,c,x,y,z,aux1;
	scanf("%d %d %d",&a,&b,&c);
	scanf("%d %d %d",&x,&y,&z);
	aux1=(x/a)*(y/b)*(z/c);
	printf("%d \n",aux1);
	
	return 0;
}