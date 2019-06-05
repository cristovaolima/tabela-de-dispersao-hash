#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <time.h>
#include <conio.h>
#include <string.h>

FILE *grafico;

struct tnode{
	int v;
	struct tnode *p;
};

struct hash{
	struct tnode **t;
	unsigned int m;
	unsigned int n;
};

void inserir(struct hash *h, int v){
	if(h->m <= h->n)
		rehashing(h);
	struct tnode *w = new_tnode(v);
	unsigned int p = fhash(h, v);
	w->p = h->t[p];
	ht[p] = w;
	h->n = h->n + 1;
	
}

int main(int argc, char **argv)
{
	
	return 0;
}

