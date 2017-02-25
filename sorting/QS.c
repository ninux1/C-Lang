
#include <stdio.h>
#include <stdlib.h>

int partition(int arr[], int lo, int high) 
{
	int pivot = arr[high];
	int small = lo - 1;
	int t;	

	for(int k = lo; k < high; k++) {
	   if(arr[k] <= pivot) {
	   	small++;
		t = arr[small];
		arr[small] = arr[k];
		arr[k] = t;
	   }			
	}
	
	t = arr[high];
	arr[high] = arr[small+1];
	arr[small+1] = t;	

	return small+1; 		
}

void quicksort(int arr[], int lo, int high) 
{
	int p;
	if(lo < high ) {	
	   p = partition(arr,lo, high);
	   quicksort(arr,lo, p-1);
	   quicksort(arr, p+1, high);
	}
}

int main() { 
	int arr[7] = {9, 4, 8, 3, 1, 2, 5};
	int i;
	quicksort(arr, 0, 6);
	for(i=0;i<7;i++)	
		printf("%d ", arr[i]);
	printf("\n");
	return 0;
}

