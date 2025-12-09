#include <stdio.h>
#include <stdbool.h>

void hello(char name[], int age) {
    printf("Hello, %s! You are %d years old.\n", name, age);

}

int main() {
    hello("Alice", 30); 

 // Function prototype declaration:
 // Provide the compiler with information about the function's name,
 // return type, and parameters before its actual definition.
 //enables type checking and helps catch errors during compilation.
 //improves readability by allowing functions to be organized in any order within the code.
    
 return 0;
}