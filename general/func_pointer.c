#include<stdio.h>

void hello() {

  printf("Hello Function Invoked\n");

}

int main() {

 void (*func_ptr)() = NULL;
 func_ptr = &hello;
 func_ptr();   
 return 0;

} 
