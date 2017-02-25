// Simple Sorting example.

#include <stdio.h>

int main() {

int arr[20] = {20,19,18,17,16,5,4,3,2,1,10,9,8,7,6,15,14,13,12,11};
int temp,i,j;
int len=20;

for(i=0; i<len-1; i++) 
{
   for(j=0; j<len-1; j++)
   {	
	if(arr[j] > arr[j+1])
	{ 	
		temp = arr[j];
		arr[j] = arr[j+1];
		arr[j+1] = temp;
	}
    }	
}

printf("Sorted Array \n");

for(i=0; i<20; i++)
	printf("%d ", arr[i]);

printf("\n");
return 0;

}
