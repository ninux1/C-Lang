//
// Created by Ninux-MC on 8/24/2017.
//

#include<stdio.h>

int find_max(int a[], int wsp, int wep)
{
   if(a[wsp] > a[wsp+1] && a[wsp] > a[wep])
       return a[wsp];
   if(a[wsp+1] > a[wsp] && a[wsp+1] > a[wep])
       return a[wsp+1];
   if(a[wep] > a[wsp] && a[wep] > a[wsp+1])
       return a[wep];

   return 0;
}

void sliding_window(int Arr[], int total_elem) {
    int max = 0;
    int wsp = 0;

    while ((wsp + 2) != (total_elem)) {
        max = find_max(Arr, wsp, wsp + 2);
        printf("The Max in this slide is %d\n", max);
        wsp += 1;
    }
}
int main()
{
    int Arr[] = {35,25,26,12,45,2,3,56,44,103,140,23,45,68,98};
    int total_elem = sizeof(Arr) / sizeof(Arr[0]);
    sliding_window(Arr, total_elem);
    return 0;

}