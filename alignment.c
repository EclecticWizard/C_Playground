/*
Idea here is to illustrate alignment, which is an area in memory that objects can
be stored. Different data types/objects have different alignment requirements.
Most of the time, alignment isn't a concern as compilers can handle alignment
dynamically.


 */

# include <stdio.h>

struct S {
  int i; double d; char c;
};

int main(void) {
  unsigned char bad_buff[sizeof(struct S)];
  _Alignas(struct S) unsigned char good_buff[sizeof(struct S)];

  struct S *bad_s_ptr = (struct S *)bad_buff; // wrong pointer alignment
  struct S *good_s_ptr = (struct S *)good_buff; //correct pointer alignment
}

