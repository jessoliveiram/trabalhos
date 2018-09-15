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
	