#include<stdio.h>
int main (void)
{
	int n,z,j,cont,i,dif=0;
	
	while(scanf("%d",&n)!=0);
	{
		printf("teste %d \n",n);
		for(i=0;i<n;i++)
		{
			scanf("%d %d",&j,&z);
			dif=dif+(j-z);
			printf("%d\n",dif);
		}
		
	}
	return 0;
}
