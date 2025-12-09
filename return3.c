#include <stdio.h>
int getMax(int x, int y){

    if(x>=y){
        return x;
    }
    else{
        return y;
    }
}

int main (){
    int max = getMax(10,20);
    printf("The maximum value is %d\n", max);
    return 0;

}