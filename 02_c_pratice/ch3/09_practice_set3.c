// //q2
// #include <stdio.h>

// int main(){
//     int marks1,marks2,marks3;
//     printf("enter marks1:\n");
//     scanf("%d",&marks1);
//     printf("enter marks2:\n");
//     scanf("%d",&marks2);
//     printf("enter marks3:\n");
//     scanf("%d",&marks3);
//     printf("marks are %d %d %d\n", marks1,marks2,marks3);

//     if (marks1<33||marks2<33||marks3<33){
//         printf("you failed");
//     }

//     else if ((marks1+marks2+marks3)/3<40){

//         printf("you failed");
//     }
//     else{
//         printf("you passed!");
//     }
    
//     return 0;
// }

// //q3

// #include <stdio.h>

// int main(){
//     int salary;
//     float tax=0;
//     printf("enter salary:");
//     scanf("%d",&salary);

//     if (salary<250000){
//         tax=0;
        
       
//     }

//     else if(salary>=250000 && salary<500000){
//         tax=0.05*(salary-250000);
        
//     }

//     else if(salary>=500000 && salary<1000000){
//         tax=0.05*(500000-250000)+0.2*(salary-500000);
        
//     }

//      else {
//         tax=0.05*(500000-2500000)+0.2*(salary-500000)+0.3*(salary-1000000);
        
//     }
//     printf("the tax to be paid is %.2f",tax);



//     return 0;
// }

// //Q4
// #include <stdio.h>

// int main(){
//     int year;
//     printf("enter year:");
//     scanf("%d",&year);

//     if((year%4==0 && year%100!=0) || year%400==0){ //imp. learn it for checkin leap year
//         printf("this is a leap year");
//     }
//     else{
//         printf("not aleap year");
//     }
    
    
//     return 0;
// }

//q5
// #include <stdio.h>

// int main(){
//     char abc;
//     printf("enter a character:");
//     scanf("%c",&abc);

//     if(abc>=65 && abc<=90){       //abc>=65 && abc<=90
//         printf("uppercase");
//     }
//     else if(abc>=97 && abc<=122){   //abc>=97 && abc<=122
//         printf("lowercase");
//     }
//     else{
//         printf("invalid input!");
//     }

//     return 0;
// }


// //q6
// #include <stdio.h>

// int main(){
//     int a,b,c,d;
//     printf("enter number:");
//     scanf("%d",&a);
//     printf("enter number:");
//     scanf("%d",&b);
//     printf("enter number:");
//     scanf("%d",&c);
//     printf("enter number:");
//     scanf("%d",&d);

//     if(a>b && a>c && a>d){
//         printf("a is the largest");
//     }
//     else if(b>a && b>c && b>d){
//         printf("b is the largest");
//     }
//     else if(c>b && c>a && c>d){
//         printf("c is the largest");
//     }
//     else if(d>b && d>c && d>a){
//         printf("d is the largest");
//     }

//     else{
//         printf("invalid");
//     }

//     return 0;
// }