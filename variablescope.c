//variable scope = refers to where a variable is accessible within the code
// Variables can share the same name as long as they are in different scopes {}
#include <stdio.h>

int add(int x, int y){
    int result = x + y; // local variable
    return result;
}

int subtract(int x, int y){
    int result = x - y; // local variable
    return result;
}
int main (){
    int a = 5; // global variable
    int b = 10; // global variable
    int sum = add(a, b);
    printf("Sum = %d\n", sum);
    int difference = subtract(b, a);
    printf("Difference = %d\n", difference);
    
    return 0;
}