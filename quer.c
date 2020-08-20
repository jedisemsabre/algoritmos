#include<stdio.h>

int main(void) 

{ 
	
	int n,i,num,cont=1; 

		do

		{ 
			for(i=1;i<=n;i++)
	
			{ 

				scanf("%d",&num); 

				if(i==num)

				{
	
					printf("Teste %d\n",cont++);

					printf("%d\n",num);
	
					printf("\n");

				} 

			} 

		

	} while((scanf("%d",&n)!=0));
	

	return 0;

}