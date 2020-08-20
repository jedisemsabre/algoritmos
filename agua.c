#include <stdio.h> 
int main(void)
{ 

	int valor;
	int total;
 
	scanf ("%d",&valor); 


	if (valor<=10) 
	{
		total=7;
	}
 
	else if (valor>=11 && valor<=30)
	{
		total=(valor-10)*1+7;
	} 
	 
	else if (valor>=31 && valor<=100)
	{
		total=(valor-30)*2+27;
	} 
 	else if (valor>=101) 
	{
		total=(valor-100)*5+167;
	}

	printf ("%d\n",total); 

	 	return 0; 
} 