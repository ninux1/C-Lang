
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>	

typedef struct node {
	int data;
	struct node *head;
	struct node *tail;
}node_t;

node_t *ring;	

void ring_init(node_t **);
void ring_insert(node_t **, int);
void ring_remove(node_t **);
void ring_status(node_t **);
void ring_cleanup(node_t **);
