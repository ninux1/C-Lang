
#include<stdio.h>

// Implements divide and conquer strategy

int find_index(int a[], int start, int end, int key)
{
   int total_elements = (end - start) + 1;
   int mid = (start + end) / 2;
   int index = 0;

   if (key < a[mid])
   {
       index = find_index(a, start, mid, key);
   }
   if (key > a[mid])
   {
       index = find_index(a, mid+1, end, key);
   }
   if (key == a[mid])
   {
	return mid;	
   }
   return index;
}
int main()
{
    int a[]={10,20,30,40,50,60,70,80,90,100,200,300};
    int res = find_index(a, 0, 11, 90);

    printf("The key is present at index %d in the array\n",  res );
    return 0;
}
