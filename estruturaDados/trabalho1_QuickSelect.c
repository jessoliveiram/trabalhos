#include <stdio.h>
#include <stdlib.h>

int L, nelem, tam, pospivot, k;

void init (int *L, int nelem, int tam) {
	tam = 20;
	nelem = 0;
	L = (int*) malloc(tam* sizeof(int*));
}

void insere (int *L, int nelem, int tam){
	if (nelem == tam)
	{
		overflow(L,tam);
	} 
	if (nelem < tam) 
	{
		L[nelem] = x;
		nelem ++;
	}
}

 int overflow(int *L, int tam)
 {
		int *novo = (int*) malloc((2*tam)* sizeof(int*))
		if (novo==NULL)
    {
			printf("%s\n", "Erro!");
		} 
    else 
    {
			for(i=0, i=(tam-1), i++)
      {
				novo[i] = L[i]
				free(L)
				L = novo
				tam=tam*2
			}
		}
	}

int buscaQuickSelect(int* V)
{
  int inicio = V[0];
  int fim = V[]
	if (inicio == (fim-1))
  {
		return V[inicio];
	} 
  else 
  {
	  pospivot = particiona(V, inicio, fim);
			
    if (k == pospivot)
    {
			return V[k]
		} 
    if (k < pospivot)
    {
			return buscaQuickSelect(V, inicio, pospivot, k);
  	} 
    else 
    {
			return buscaQuickSelect(V, pospivot+1, fim, k);
		}
	}
		buscaQuickSort(V, inicio, pospivot);
		buscaQuickSort(V, pospivot+1, fim);
	} 
  else 
  {
		printf("%s\n", "Erro!");
	}
}

int particiona(int* V, int inicio, int fim) {
  int p;
  srand(p(int));
  for(int i = 0; i<fim-1; i++) 
  {
	  p = rand();     
  }
  int pivot = V[p];
	V[p] = V[inicio];
	int i = inicio+1;
	int j = fim-1;
	while(i <= j)
  {
		while (i < fim) && (V[i] <= pivot) 
    {
			i++;
		}
    while(j > inicio) && (V[j] > pivot) 
    {
			j--;
		} 
    if (i <j) 
    {
			return troca(V[i], V[j]);
      V[inicio] = V[j];
		  V[j] = pivot
		}
	}
}

int troca(int a, int b) 
{
	int temp;
  temp = a;
	a = b;
	b = temp;
}


int main()
{
  cin >> "Escreva um vetor: " >> vetor;
  cout << contaPalavra(lista, "roupa");
}