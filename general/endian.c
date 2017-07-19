#include<stdio.h>

int main() {

    int e = 1; //2048;
    char *c = (char*)&e;

    if(*c)
	printf("Little endian\n");
    else
	printf("Big endian\n");

    printf("%d\n", *c);	

    return 0;	 
}
