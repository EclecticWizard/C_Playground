#include <stdio.h>

int tracker[7];

int main(void) {
    for (int i= 0; i < 7; i++) {
        printf("How many cups of coffee did you drink on day %i:", i + 1);
        scanf("%i", &tracker[i]);
    }
    printf("\n amount of coffees drank:\n");
    for (int i = 0; i < 7; i++) {
        printf("Day %i: %i\n", i + 1, tracker[i]);
    }
}
