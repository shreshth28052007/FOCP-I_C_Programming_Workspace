#include <stdio.h>

int main(){
   

    if(154){
        printf("this statement is always executed\n");
    }

    if(23.5){
        printf("this statement is executed\n");
    }

     if('a'){
        printf("this statement is executed\n");
    }
    
    if(0){
        printf("this statement is not executed\n");
    }
    return 0;
}