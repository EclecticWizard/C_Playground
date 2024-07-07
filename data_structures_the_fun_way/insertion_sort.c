#include "stdio.h"

int nums[]= {1,6,4,7,34,3,56,7,123,13};

void insertion_sort(int a[]) {
    int n = sizeof(&a);
    int i = 1;
    while (i < n) {
        int current = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > current) {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = current;
        i++;
    }
}

int main(void) {
    for (int i = 0; i < sizeof(nums); i++) {
        printf("index %i:%i\n", i, nums[i]);
    }
    printf("sorting...\n");
    insertion_sort(nums);
    for (int i = 0; i < sizeof(nums); i++) {
        printf("index  %i:%i\n", i, nums[i]);
    }
}
