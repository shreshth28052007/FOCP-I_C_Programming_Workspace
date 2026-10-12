#include <stdio.h>

int main(){
    int i=5; //declare and initialize 'i' with 5
    int j=i; //declare and initialize 'j' with value of 'i'
    int a=1,b=2,c=3; //declare and initialize 'a','b','c' with 1,2,3
    // %d is called format specifier
    // %d is for int,%f is for float and %c is for char
    printf("the value of i is %d and value of j is %d\n",i,j);
    printf("the value of a is %d and value of j is %d\n",a,j);
    printf("the value of b is %d and value of j is %d\n",b,j);
    printf("the value of c is %d and value of j is %d\n",c,j);
    //shift+alt+arrow down

    return 0;
}