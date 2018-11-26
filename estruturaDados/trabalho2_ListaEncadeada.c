#include <iostream>
#include <string>
#include <bits/stdc++.h> 

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

void separafrase(string frase)
{
  string palavra;
  short contador = 0;
  for (short i = 0; i<frase.length(); i++){
    if (frase[i] == ' ')
        contador++;
    else
        palavra[contador] += frase[i];
        insereNoFinal(&lista, palavra); 
  }
}

int main()
{
  tno * lista = NULL;

  insereNoFinal(&lista, "jurubeba");
  insereNoFinal(&lista, "guerigueri");
  insereNoFinal(&lista, "guerigueri");
  
  separaFrase("O rato roeu a roupa do rei de Roma");
  cout << contaPalavra(lista, "roupa");

}
