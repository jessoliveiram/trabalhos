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

int separaFrase(string frase)
{
  for(int i = 0; frase[i]; i++)
  {
  frase[i] = tolower(frase[i]);
  }
  string palavra;
  short contador = 0;
  for (short i = 0; i<frase.length(); i++)
  {
    if (frase[i] == ' ')
    {
        contador++;
    }
    else
    {
        palavra[contador] += frase[i];
        insereNoFinal(&lista, palavra);
    }
  }
  return contador;
}

int main()
{
 tno * lista = NULL;
 cin >> "Escreva uma frase: " >> lista;
 for (int i=0, i<(separaFrase(lista)), i++)
 {
    cout << contaPalavra(lista, lista[i]);
 }
return 0;
}
