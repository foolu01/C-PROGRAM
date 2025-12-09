//print n no. of lines based on user input
#include <stdio.h>
int main (){
    int n;
    printf("Enter a number: ");
    scanf ("%d", &n);

    for (int i = 1; i<=n; i++){
        printf("This is line %d\n",i);
    }

    return 0;
}