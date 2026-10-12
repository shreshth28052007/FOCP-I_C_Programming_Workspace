#include <stdio.h>

int main(){
    int i=5;
    i+=5;//10
    printf("the value of i %d\n",i);

    printf("the value of i %d\n",++i);

    printf("the value of i %d\n",i++);

    printf("the value of i %d\n",i);

    // i++ prints first and then incremets i (post increment operator)
    // ++i increment first and then prints i ( post increament operator)
    
    return 0;
}