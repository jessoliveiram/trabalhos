#include <stdio.h>
#include <stdlib.h>

typedef struct arvore {
int dados;
int altura;
struct arvore *dir;
struct arvore *esq;
} Arv;

Arv *raiz;

int max(int x, int y) 
{
  if (x > y)
  {
    return x;
  }
  else
  {
    return y;
  }
}

int altura_No(Arv *arv) {
  if (arv == NULL) 
  {
    return 0;
  }
  else
  {
    return arv->altura;
  }
}

int aplicaALTURA(Arv* arv) {
arv->altura = max(altura_No(arv->esq), altura_No(arv->dir)) + 1;
return arv->altura;
}

int fat_bal(Arv* arv) {
return (altura_No(arv->esq) - altura_No(arv->dir));
}

Arv* rotacaoEsquerda(Arv *arv) 
{
Arv *tmp = arv->dir;
arv->dir = tmp->esq;
tmp->esq = arv;
return tmp;
}

Arv* rotacaoDireita(Arv *arv) 
{
Arv *tmp = arv->esq;
arv->esq = tmp->dir;
tmp->dir = arv;
return tmp;
}

Arv* inserir(Arv** arv, int v) {
if (*arv == NULL) {
Arv No = (Arv) malloc(sizeof (Arv));
No->dados = v;
No->dir = NULL;
No->esq = NULL;
No->altura = 0;
*arv = No;
} else {
Arv *tmp = *arv;
if (v < tmp->dados) {
inserir(&tmp->esq, v);
tmp->altura = aplicaALTURA(tmp);
//rotação
if(fat_bal(tmp) == 2){
if(fat_bal(tmp->esq) == 1){
*tmp = rotacaoDireita(*tmp);
}
(*tmp).esq = rotacaoDireita((*tmp).esq);
*tmp = rotacaoEsquerda(*tmp);
}

    } else {
        inserir(&tmp->dir, v);
        tmp->altura = aplicaALTURA(tmp);
        //rotação
        if(fat_bal(tmp) == -2){
            if(fat_bal(tmp->dir) == -1){
                *tmp = rotacaoEsquerda(*tmp);
            }
            (*tmp).dir = rotacaoEsquerda((*tmp).dir);
            *tmp = rotacaoDireita(*tmp);
        }
    }
}
}

void listar(Arv *arv) {
if (arv != NULL) {
printf(“No = %d, altura = %d, FATBAL = %d\n”, arv->dados, arv->altura, arv->fatbal);
listar(arv->esq);
listar(arv->dir);
}
}

int main() 
{
  raiz = NULL;
  int valor;
  cin >> "\nInforme o valor: " >> valor;
  inserir(&raiz, valor);
  cout >> ("\n\n");
  cout >> listar(raiz);
  cout >> ("\n\n");
}
