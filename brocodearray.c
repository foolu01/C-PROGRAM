#include <stdio.h>
int main(){

    // array= a fixed size collection of elements of the same data type
    // (similar to a variable, but can hold multiple values)

    int number []={10,20,30,40,50,60};
    char grades[]={'A', 'B', 'C', 'D'};
    /*printf("%d\n", number[3]);
    printf("%c\n", grades[2]);
    */


    int size = sizeof(number) / sizeof(number[0]);
    
    for(int i =0; i<size;i++){
        printf ("%d\n", number[i]);
    }
    return 0;
}