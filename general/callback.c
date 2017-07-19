#include<stdio.h>

void add(int a, int b) 
{
   printf("Sum is %d\n", a+b);
}

void multiply(int a, int b)
{
   printf("Product is %d\n", a*b);
}

void operation(char c, void (*callback[])())
{ 
   if(c == '+')
     callback[0](20,30);
   else if(c == '*')
     callback[1](20,30);
   else
     printf("no options matched\n");   	
}

int main() {
   void (*fp[])() = {add, multiply};
   operation('+', fp);
   operation('*', fp);
   return 0;
}
