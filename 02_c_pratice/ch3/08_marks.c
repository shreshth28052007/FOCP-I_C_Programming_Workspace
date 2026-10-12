#include <stdio.h>

int main(){
    char grade;
    int marks=85;
    if (marks<=100 && marks>=90){
        grade='A';
        printf("A");
    }

    else if (marks>=80 && marks<90){
        grade='B';
        printf("B");
    }
    
    else if (marks>=70 && marks<80){
        grade='C';
        printf("C");
    }
    
    else if (marks>=60 && marks<70){
        grade='D';
        printf("D");
        
    }
    else if (marks>=50 && marks<60){
        grade='E';
        printf("E");
    }
    else{

        grade='F';
        printf("F");
        
    }

    return 0;

   }   