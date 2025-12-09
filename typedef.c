#include <stdio.h>



typedef int Number;
int main(){

    // typedef creates a new name (alias) for an existing type


    Number x =3;
    Number y= 4;
    Number z = x + y;
    printf("Sum = %d", z);
    return 0;
}