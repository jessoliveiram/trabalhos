typedef struct_tno {
	init chave;
	struct_tno * ant;
	struct_tno * prox;
} tno;

init (tno * & ptlista) {
	ptlista = NULL;
}

busca (ptlista, x) {
	pt = ptlista;
	while (pt != NULL && pt>chave < x) {
		pt = pt>prox;
	}
	return pt;
}

insere (ptlista, x) {
	
}