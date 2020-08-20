#include <stdio.h>


int main (void)

{

	int a,b;

	scanf("%d", &a);

	b=a-1986;

	b=b%76;

	b=76-b;

	b=b+a;

	printf("%d\n", b);

	return 0;

}