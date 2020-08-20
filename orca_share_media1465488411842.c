#include <stdio.h>
#include <string.h>

int buscaseqR(int vet[], int num, int i)
{
	if(vet[i] == num)
	{
		return i;
	}
	else if(i < 10)
	{
		return (buscaseqR(vet, num, i + 1));
	}

	return (-1);

}

int buscaseqI(int vet[], int num)
{
	int i = 0;

	while(vet[i] != num || i <= 9)
	{
		if(vet[i] == num)
		{
			return i;
		}
		
		i++;
	}

	return (-1);
}

int buscabinI(int vet[], int num)
{
	int meio, direita = 9, esquerda = 0;

	while(e <= d)
	{
		meio = (direita+esquerda)/2;

		if(vet[meio] == num)
		{
			return meio;
		}
	
		if(vet[meio] > num)
		{
			direita = meio - 1;
		}
		else
		{
			esquerda = meio + 1;
		}

	}

	return (-1);
}

int buscabinR(int vet[],int num,int e,int d, int i)
{
	int m = (e + d)/2;	

	if(vet[m] == num)
	{
		return m;
	}
	else if(e <= d)
	{
		if(vet[m] > num)
		{
			return buscabinR(vet, num, e, m - 1, i + 1);
		}
		else
		{
			return buscabinR(vet, num, m + 1, d, i + 1);
		}
	}

	return(-1);
}

int buscabinRC(char vet[],char letra,int e,int d, int i)
{
	int m = (e + d)/2;	

	if(vet[m] == letra)
	{
		return m;
	}
	else if(e <= d)
	{
		if(vet[m] > letra)
		{
			return buscabinRC(vet, letra, e, m - 1, i + 1);
		}
		else
		{
			return buscabinRC(vet, letra, m + 1, d, i + 1);
		}
	}

	return(-1);
}

void buscaseqPrimeiroUltimoI(int vet[], int num, int *primeiro, int *ultimo)
{
	int i = 0;
	*primeiro = -1;
	*ultimo = -1;

	while(i < 10)
	{
		if(vet[i] == num)
		{
			if(*primeiro == -1)
			{
				*primeiro = i;
				*ultimo = i;
			}
			else
			{
				*ultimo = i;
			}
		}

		i++;
	}
}



int main()
{
	int vet[10] = {1,2,3,5,7,8,12,13,86,96};
	int vetor[10] = {2,3,3,3,4,4,7,10,10,15};
	char str[10] = "abcdefghi";
	int primeiro, ultimo;
	
	//printf("\n%d\n", buscaseqR(veto, 3, 0));

	buscaseqPrimeiroUltimoI(vetor, 3, &primeiro, &ultimo);

	printf("%d primeiro, %d ultimo\n", primeiro, ultimo);
}







