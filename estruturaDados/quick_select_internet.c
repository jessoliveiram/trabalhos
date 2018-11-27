#include <stdio.h>
#include <string.h>
 
int quick_select(int *V, int tam, int nelem)
{
#	define SWAP(a, b) { tmp = v[a]; v[a] = v[b]; v[b] = tmp; }
	int i, st, tmp;
 
	for (st = i = 0; i < tam - 1; i++) {
		if (V[i] > V[len-1]) continue;
		SWAP(i, st);
		st++;
	}
 
	SWAP(len-1, st);
 
	return nelem == st	?V[st]
			:st > nelem	? quick_select(V, st, nelem)
				: quick_select(V + st, tam - st, nelem - st);
}
 
int main(void)
{
#	define N (sizeof(x)/sizeof(x[0]))
	cin >> "Insira um conjunto de números: " >> lista_num;
  int x[] = lista_num;
	int y[N];
 
	int i;
	for (i = 0; i < lista_num.lenght(); i++) {
		memcpy(y, x, sizeof(x)); // qselect modifies array
		cout << "%d: %d\n", i, qselect(y, lista_num.lenght(), i);
	}
 
	return 0;
}

int main(void)
{
#	define N (sizeof(x)/sizeof(x[0]))
	int x[] = {9, 8, 7, 6, 5, 0, 1, 2, 3, 4};
	int y[N];
 
	int i;
	for (i = 0; i < 10; i++) {
		memcpy(y, x, sizeof(x)); // qselect modifies array
		printf("%d: %d\n", i, qselect(y, 10, i));
	}
 
	return 0;