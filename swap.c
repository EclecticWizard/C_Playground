// Swaps two values

#include <stdio.h>

/* void swap(int a, int b){
  int t = a;
   a = b;
   b = t;
  printf("swap: a = %d, b %d\n", a, b);
}
*/

// The above function doesn't work properly as it only swaps the values for the scope of the function,
// If we print the values of a and b after it has run (outside of the function then the values are still
// the same as they were when declared in main


void swap(int* pa, int* pb) {
  int t = *pa;
  *pa = *pb;
  *pb = t;
  printf("swap: a = %d, b = %d\n", &pa, &pb);// this will print the memory addresses of the pointer variables
}
// Using pointers and dereferencing we can get the function to perform actions on the variables in such a way
// that the effects are still present beyond the scope of the function
int main(void) {
  int a = 21;
  int b = 17;

  swap(&a,&b); // As we are using pointers we need to & (unary operator) to access the memory location of the
               // variables
  printf("main: a = %d, b = %d\n", a, b);
  return 0;
}


