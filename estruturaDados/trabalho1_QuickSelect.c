int L, nelem, tam;

init (int *& L, int & nelem, int & tam) {
	tam = 20;
	nelem = 0;
	L = (int *) malloc( tam * sizeof(int));
}

insere (int *& L, int & nelem, int & tam){
	if (nelem = tam)
	{
		overflow(L,tam)
	} 
	if (nelem < tam) 
	{
		L(nelem) = x;
		nelem ++;
	}
	
	overflow(int *& L, int & tam){
		novo = (int *) malloc (2*tam sizeof(int))
		if (novo==NULL){
			printf("%s\n", "Erro!");
		} else {
			for(i=0, i=tam-1, i++){
				novo[i] = L[i]
				free(L)
				L = novo
				tam=tam*2
			}
		}
	}

	buscaQuickSelect(V, inicio, fim){
		if (inicio = fim-1){
			return V[inicio]
		} else {
			pospivot = particiona(V, inicio, fim)
			if (k = pospivot){
				return V[k]
			} if (k < pospivot)
				return buscaQuickSelect(V, inicio, pospivot, k)
			} else {
				return buscaQuickSelect(V, pospivot+1, fim, k)
			}
		}

			
			buscaQuickSort(V, inicio, pospivot)
			buscaQuickSort(V, pospivot+1, fim)
		} else {
			printf("%s\n", "Erro!");
		}
	}

	particiona(V, inicio, fim) {
		p = rand(inicio, fim-1);
		pivot = V[p];
		V[p] = V[inicio];
		i = inicio+1;
		j = fim-1;
		while(i <= j){
			while (i < fim) && (V[i] <= pivot) {
				i++;
			} while(j > inicio) && (V[j] > pivot) {
				j--;
			} if (i <j) {
				troca (V[i], V[j])
			}
		}
		troca(a, b) {
			temp = a;
			a = b;
			b = temp;
		}
		V[inicio] = V[j];
		V[j] = pivot
		return j;
	}
}
