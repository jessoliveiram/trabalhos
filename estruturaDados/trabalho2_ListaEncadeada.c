#include <iostream>
#include <string>

using namespace std;

typedef struct struct_tno {
	string chave;
	struct_tno * ant;
	struct_tno * prox;
} tno;

int contaPalavra(tno* & ptlista, string x) {
	int count = 0;
	tno* pt = ptlista;
	while (pt != NULL) {
	    if(pt->chave == x)
	    {
	        count++;
	    }
	    
		pt = pt->prox;
	}
	
	return count;
}

void insereNoFinal(tno** listaRef, string x) 
{ 
  tno* novoNo = new tno(); 
  novoNo->chave = x; 
  novoNo->prox = NULL; 
  
  tno* ultNo = *listaRef;
  
  if (*listaRef == NULL) { 
      novoNo->ant = NULL; 
      *listaRef = novoNo; 
      return; 
  } 
  
  while (ultNo->prox != NULL)
  {
    ultNo = ultNo->prox; 
  } 
  
  ultNo->prox = novoNo; 
  
  novoNo->ant = ultNo; 
}

int main()
{
  tno * lista = NULL;

  insereNoFinal(&lista, "jurubeba");
  insereNoFinal(&lista, "guerigueri");
  insereNoFinal(&lista, "guerigueri");
  
  cout << contaPalavra(lista, "234234234");
}
