#include <stdio_ext.h>
#include <string.h>
#include <time.h>

void quicksort(int A[],int lo,int hi)
{
	int p;

	if (lo < hi)
	{
		p = partition(A, lo, hi);
		quicksort(A, lo, p);
		quicksort(A, p + 1, hi);
	}
}

int partition(int A[],int lo,int hi)
{
	int pivot, i, j, troca;

	pivot = A[lo];
	i = lo - 1;
	j = hi + 1;
	while(1)
	{
		do{
			j = j - 1;
		}while(A[j] > pivot);

	        do{
			i = i + 1;
		}while(A[i] < pivot);

		if(i < j)
		{
			troca = A[i];
			A[i] = A[j];
			A[j] = troca;
		}
		else
		{
			return j;
		}
	}
}

int main()
{
	int vet[10], i;

	srand(time(NULL));

	for(i = 0; i < 10; i++)
	{
		vet[i] = rand() % 10;
	}

	quicksort(vet, 0,9);

	for(i = 0; i < 10; i++)
	{
		printf("%d\t", vet[i]);
	}
}
