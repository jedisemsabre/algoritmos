#include<stdio.h>


int main(void)

{

	int l,n;
 
	unsigned long long int  a,tot;
 
  	scanf("%d %d",&l,&n);
 
 	a = l-(n-1);

 	a = (a*a);

   
 	tot= a+(n-1);
 
	printf("%llu\n",tot);

 

	   return 0;

}