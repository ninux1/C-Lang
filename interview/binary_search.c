
#include<stdio.h>


int find_index(int a[], int start, int end, int key)
{
   int total_elements = (end - start) + 1;
   int mid = start + end / 2;

   if (key < a[mid])
   {
       find_index(a, start, mid, key);
   }
   if (key > a[mid])
   {
       find_index(a, mid+1, total_elements, key);
   }
   if (start == end)
   {
       return start - 1;
   }

}
int main()
{
    int a[]={10,20,30,40,50,60,70,80,90,100,200,300};
    int res = find_index(a, 0, 11, 40);

    printf(" 40 is at %d index in the array\n", res );
    return 0;
}
