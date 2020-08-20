#include<stdio.h>
int main(void)
{
	int n,ingr,i,v,t;
	
	while(scanf("%d",&n)!=0)
	{
		for(i=1;i<n;i++)
		{
			scanf("%d",&ingr);
			if(ingr==n)
			{
				printf("teste %d \n",t);
				printf("%d\n",ingr);
				printf("\n");
				
			}
			t++;
		ingr=0;
		}
		
				
	}	
	return 0;
}

