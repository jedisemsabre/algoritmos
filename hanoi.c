# include <stdio.h>


int main(void)

{
	
	int n, i, jog=1, teste=1;

	while(scanf("%d", &n)==1 && n!=0)

	{

		printf("Teste %d\n",teste);

		for(i=0;i<n;i++)

		{

			jog=jog*2;

		}

		printf("%d\n", jog-1);

		teste++;

		jog=1;

	}

	return 0;

}
