#include <stdio.h>
#include <stdlib.h>
#define INT_MAX   (2147483647) 

int L, nelem, tam, pospivot, k;

void init (int *V[], int nelem, int tam) {
	tam = 20;
	nelem = 0;
	V = (int*) malloc(tam* sizeof(int));
}

int quickSelect(int V[], int inicio, int fim, int k)
{
	if (inicio == (fim-1))
  {
		return V[inicio];
	} 
  else 
  {
    pospivot = (inicio+fim)/2;
	  pospivot = particiona(V, inicio, fim, pospivot);
			
    if (k == pospivot)
    {
			return V[k];
		} 
    else if (k < pospivot)
    {
			return buscaQuickSelect(V, inicio, pospivot-1, k);
  	} 
    else 
    {
			return buscaQuickSelect(V, pospivot+1, fim, k);
		}
	}
}

int particiona(int V[], int inicio, int fim, int k) 
{
  int pivot = V[inicio];
	V[pivot] = V[inicio];
	int i = inicio;
	int j = fim-1;
	while ((i<=j) && (V[i] <= pivot))
  {
    return troca(&V[inicio], &V[i]);
		i++;
	}
	return troca(&V[fim], &V[i]);
  V[inicio] = V[i];
	V[i] = pivot;
}

void troca(int* a, int* b) 
{
	int temp;
  temp = *a;
	*a = *b;
	*b = temp;
}


int main(int argc, char *argv[])
{
	int i;
	for (i = 0; i < tam; i++)
	{
		scanf("%d ", &V[i]);
	}

	int k = 10;
	int elemento = quickSelect(V, 0, tam-1, k);
	printf("%d", elemento);

	return 0;
}