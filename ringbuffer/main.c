
#include <ring.h>

int main() {

	int element=0;
	char choice;

	ring_init(&ring);
	
	while(1) {
	
		choice = '\0';
		printf("\n\t\t\tPress 's' for ring status\n \
			Press 'i' for ring insert\n \
			Press 'r' for ring remove\n \
			Press 'e' for exit program\n");
		
		printf("Enter your choice: ");
		scanf(" %c", &choice);

		if ( choice == 'i') {
			printf("Enter an integer to insert :");
			scanf("%d", &element);
		}

		switch(choice) {
			case 's':
				ring_status(&ring);
				break;
			case 'i':
				ring_insert(&ring, element);
				break;
			case 'r':
				ring_remove(&ring);
				break;
			case 'e':
				ring_cleanup(&ring);
				exit(0);
			default:
				printf("Invalid Choice\n");
				break;
		}
	}
		
return 0;

}
