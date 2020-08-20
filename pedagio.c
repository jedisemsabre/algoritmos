#include <stdio.h>

int main(void)
{
	int L,D,K,P,a,b,tot;
	scanf("%d %d",&L,&D);
	scanf("%d %d",&K,&P);
	a=L/D;
	b=a*P;
	tot=b+(L*K);
	printf("%d",tot);
	
	return 0;
}