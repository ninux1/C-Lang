// Simple Sorting example.

#include <stdio.h>

int main() {

int arr[20] = {20,19,18,17,16,5,4,3,2,1,10,9,8,7,6,15,14,13,12,11};
int temp,i,j;
int len=20;

for(i=0; i<len-1; i++) 
{
   for(j=i+1; j<len; j++)
   {	
	if(arr[i] > arr[j])
	{ 	
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
    }	
}

printf("Sorted Array \n");

for(i=0; i<20; i++)
	printf("%d ", arr[i]);

printf("\n");
return 0;

}
