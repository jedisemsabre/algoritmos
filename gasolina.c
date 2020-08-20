#include <stdio.h> 
int main(void)
{ 

	float a,g,ra,rg;
	scanf("%f %f %f %f",&a,&g,&ra,&rg);
	
	if(ra/a>rg/g)
	{
		printf("A\n");

	}
	if(ra/a<=rg/g)
	{
		printf("G\n");
	}

	return 0; 
}