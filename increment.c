#include <stdio.h>

void increment(void) {
  static unsigned int counter = 0;
  // by making this static it has a FILE scope
  // changes made to it will be reflected throughout
  // the file. Increment only increments the counter
  // once and is called 5 times later on
  counter++;
  printf("%d ", counter);
}

int main(void) {
  for (int i = 0; i < 5; i++) {
    increment();
  }
  printf("\n");
  return 0;
}

