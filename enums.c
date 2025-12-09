#include <stdio.h>

enum Day {SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY};

int main(){

    enum Day today = WEDNESDAY;
    printf("Day number: %d\n", today);
    // enum creates a new type with a set of named integer constants
    // one common use is to represent a set of related values
    // benifit: replaces numbers with meaningful names
}