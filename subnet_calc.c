// subnet calculator

/*
  1. convert mask to binary
  2. double the bits
  3. work which of the doubled bits best accomodates the required hosts (this is the increment)
  4. working from right to left, how many hops in is the right number of bits (this will be the number of bits to allocated to hosts)
  5. make the new binary mask decimal
  6. use the increment to get the new network address
 */

#include <stdio.h>
#include <stdbool.h>

void hosts();
int toBinary();

void main() {
  printf("Welcome to the subnet calculator! Quit at any time with CTRL + C\n");
  hosts();

}

void hosts() {
  int numHosts;
  printf("How many hosts do you need for each network?: ");
  scanf("%d", &numHosts);
  int subnet[4];
  int binSubnet[4];
  printf("Enter the subnet in decimal form one quartet at a time.\nQuartet 1: ");
  scanf("%d", &subnet[0]);
  printf("\nQuartet 2: ");
  scanf("%d", &subnet[1]);
  printf("\nQuartet 3: ");
  scanf("%d", &subnet[2]);
  printf("\nQuartet 4: ");
  scanf("%d", &subnet[3]);
  binSubnet[0] = toBinary(subnet[0]);
  binSubnet[1] = toBinary(subnet[1]);
  binSubnet[2] = toBinary(subnet[2]);
  binSubnet[3] = toBinary(subnet[3]);
  
  
}

int* toBinary(int number)[10] {
  static int excess[10];
  int i;
  for (i = 0; number > 0; i++){
    excess[i] = number % 2;
    number = number / 2;
  }
  for (i = i - 1; i >= 0; i--) {
    printf("%d", excess[i]);
  }
  printf(".");
  return excess;
}

  
