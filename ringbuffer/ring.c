
#include <ring.h>

void ring_init(node_t** ring) {
	(*ring) = (node_t *)malloc(sizeof(node_t));
	if((*ring) == NULL )
		printf("Init:cannot allocate Memoryt\n");
	(*ring)->data = 0;
	(*ring)->head = (*ring);
	(*ring)->tail = NULL;
	printf("Ring Initialized\n");
}

void ring_insert(node_t **ring, int element) {
	// Always insert at the tail of the ring buffer
	node_t *n,*temp_node;

	if((*ring) == NULL) { //Initialize Ring
		(*ring) = (node_t *)malloc(sizeof(node_t));
		if((*ring) == NULL )
			printf("Insert 1 :cannot allocate Memoryt\n");
		(*ring)->data = element;
		(*ring)->head = (*ring);
		(*ring)->tail = NULL;
		return;
	}
	temp_node = (*ring);
	n = (node_t *)malloc(sizeof(node_t));
	if (n == NULL)
		printf("Insert:cannot allocate Memoryt\n");
	n->data = element;
	n->head = n;
	n->tail = NULL;
	while(temp_node->tail != NULL)
		temp_node = temp_node->tail;
	temp_node->tail = n;
}

void ring_remove(node_t **ring) {
	// Always remove from the the head of the ring buffer
	node_t *n;
	
	if((*ring) == NULL) {
		printf("Empty *** Ring Nothing to remove\n");
		return;
	}
	if((*ring)->tail == NULL) {
		printf("Deleting Last Element\n");
	}

	n = (*ring)->tail;
	(*ring)->head = NULL;
	(*ring)->tail = NULL;
	free(*ring);
	(*ring) = n;
}

void ring_status(node_t **ring) {
	node_t *n = (*ring);
	int counter = 0;
	if((*ring) == NULL) {
		printf("Empty Ring\n");
		return;	
	}
	printf("Below are the elements in the Circular buffer\n");
	while(n != NULL) {
		counter ++;
		printf("%d ", n->data);
		n = n->tail;
	}
	printf("\nTotal number of elements = %d\n", counter);
}

void ring_cleanup(node_t **ring) {
	if((*ring )== NULL) {
		printf("Nothing to cleanup, Exiting...\n");
		return;
	}
	else {
		printf("Cleaning up ...Exiting \n");
		free((*ring));
	}
}
