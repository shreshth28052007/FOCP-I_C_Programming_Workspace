#include <stdio.h>

int main(){
    int age = 19;

   

    if(age>65){
         printf("you are a senior");

    }


    else if(age>45){
         printf("you are a an elder");
    }
    else if(age>18){
        printf("you can drive!\t");
        // if(age>=70){
        //     printf("you are a senior");
    
    }

    


    else{
        printf("you cannot drive ");
    }
    return 0;
}