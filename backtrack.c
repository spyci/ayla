//Ayran Campos, Matheus Alves Guimarães, Thiago Vieira
#include <stdlib.h>
#include <stdio.h>
#define TRUE 0
#define FALSE 1
typedef long long unsigned luint;
typedef unsigned unit;
//implementação de pilha
struct s_tuple{
	int posx;
	int posy;
};
typedef struct s_tuple tuple;
struct s_no{
	int posx;
	int posy;
	struct s_no* prox;
};
typedef struct s_no no;
struct s_pilha{
	no* topo; //topo da pilha
	int cont;
};
typedef struct s_pilha pilha;
no* init_no(int x, int y){
	no* n;
	n = (no*)malloc(sizeof(no));
 	n->posx = x;
  	n->posy = y;
	return n;
}
pilha* init_pilha(){
	pilha* p = (pilha*)malloc(sizeof(pilha));
    	p->topo = NULL;
    	p->cont = 0;
   	return p;
}
int esta_vazia(pilha* p){
	if(p->topo == NULL)return TRUE;
	else return FALSE;
}
int add_no(pilha* p, no* n){
  	n->prox = p->topo;
	p->topo = n;
	p->cont += 1;
	return TRUE;
}
no* rem_no(pilha* p){
	if(esta_vazia(p) == 0)return NULL;
	else{
	no* aux;
	aux = p->topo;
	p->topo = aux->prox;
	aux->prox = NULL;
	p->cont -= 1;
	return aux;
  }
}
int del_pilha(pilha* p){
	if (esta_vazia(p)==0)return FALSE;
	else{
		free(p);
		return TRUE;
	}
}

int main(){
	int a,b;
	scanf("%u %u", &a, &b); 
	int** vet =(int**)malloc(sizeof(int*)*a);
	for (int i=0; i<a; i++){
		vet[i]=(int*)malloc(sizeof(int)*b);
	}
	int posinx, posiny;
	scanf("%u %u", &posinx, &posiny);
	(a<=posinx||b<=posiny)?exit(0):printf("posicao do cavalo: %d %d\n\n", posinx, posiny);
	for (int i=0; i<a; i++){
		for (int j=0; j<b; j++){
			vet[i][j]=0;
		}
	}
	char flag='f';
	//logica
	vet[posiny-1][posinx-1]=1;
	add_no
	while(flag!='v'){
		//edge cases
	
	}
}
