#include <string.h>
#include <stdbool.h>
#include <stdio.h>

struct CoffeeRecord {
    float rating;
    float cost_per_round;
    bool is_dark_roast;
    char other_notes[255];
    char name[255];
    char brand[255];
};

int main(void) {
    char input[255];
    scanf("%254s", &input);
    struct CoffeeRecord test;
    struct CoffeeRecord* testPointer = &test;
    strcpy(testPointer->name, input);
    printf("The current coffee is %s \n", test.name );
}
