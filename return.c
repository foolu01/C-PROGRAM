#include <stdio.h>
#include <stdbool.h>
int cube(int num){
    int result = num * num * num; // you can exclude this line as well and do not create a local variable here.
    return result; // instead you can write (return num*num*num;)
}
int main (){
    int x = cube(4);
    int y = cube(5);

    printf("%d\n",x);
    printf("%d\n",y);
    return 0;
}