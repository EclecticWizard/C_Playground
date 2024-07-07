#include <stdio.h>
#include <stdbool.h>
#include <string.h>

char string[] = {"Hello World!"};
char string2[] = {"Hello World"};

bool string_equal(char a[], char b[]) {
    if (strlen(a) != strlen(b)) {
        return false;
    }
    int n = strlen(a);
    int i = 0;
    while (i < n && a[i] == b[i]) {
        i++;
    }
    return i == n;
}

int main(void) {
    bool result = string_equal(string, string2);
    printf("%b\n", result);
}
