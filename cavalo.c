#include <stdio.h>
#include <stdlib.h>
typedef struct s_tuple{
	int y,x;
} tuple;
struct s_no{
	tuple cord;
        struct s_no* prox;
};
typedef struct s_no no;
struct s_pilha{
        no* topo; //topo da lista
        int cont;
};
typedef struct s_pilha pilha;
tuple* init_tuple(int y, int x){
	tuple* t;
	t->y=y;
	t->x=x;
	return t;
}
no* init_no(tuple cord){
	no* n;
        n = (no*)malloc(sizeof(no));
        n->cord=cord;
        return n;
}
pilha* init_pilha(){
        pilha* p = (pilha*)malloc(sizeof(pilha*));
	p->topo=NULL;
        return p;
}
int esta_vazia(pilha* p){
        if(p->topo == NULL)return 0;
        else return 1;
}
int add_no(pilha* p, no* n) {
        n->prox = p->topo;
        p->topo = n;
        p->cont += 1;
	return 0;
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
        if (esta_vazia(p) == 0)return 1;
        else{
                int n_no = p->cont;
                free(p);
                return 0;
        }
}

int main(int argc, char*argv[]){
	int a,b;
	scanf("%d %d", &a, &b);
	int **matriz = (int**)malloc(sizeof(int*)*a);
	for (int i=0; i<a; i++){
		matriz[i]=(int*)malloc(sizeof(int)*b);
	}
	for (int i=0; i<a; i++){
		for (int j=0; j<b; j++){
			matriz[i][j]=1;
		}
	}
	//logica de cavalo
	int cavY, cavX;
	scanf("%d %d", &cavY, &cavX);
	tuple* cav=init_tuple(cavY-1, cavX-1);
	pilha* cavalo=init_pilha();
	while(
	
}
