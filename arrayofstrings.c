#include <stdio.h>

int main(){

    // Array of strings

    char fruit[][10]= {"Apple", 
                        "Banana", 
                        "Cocunut", 
                        "pineapple"};
    int size = sizeof(fruit)/sizeof(fruit[0]);

    // changing letters now with help of 2d array

    fruit[0][0]= 'e';
    fruit[0][4]= 'A';

    fruit[1][1]= 'B';
    fruit[2][6]= 'C';
    for(int i=0; i<size; i++){
        printf("%s\n", fruit[i]);
    }



    return 0;
}