// //q1
// #include <stdio.h>

// int main(){
//     int n;
//     printf("enter:");
//     scanf("%d",&n);
//     for(int i=1;i<=10;i++){

//     printf("%d X %d=%d\n",n,i,n*i);
//     }
//     return 0;
// }

// //q2
// #include <stdio.h>

// int main(){
//     // int n;
//     // printf("enter:");
//     // scanf("%d",&n);
//     int n=10;
//     for(int i=10;i;i--){

//     printf("%d X %d=%d\n",n,i,n*i);
//     }
//     return 0;
// }

// //q5

// #include <stdio.h>

// int main(){
//     int i=1;
//     int sum=0;

//     while(i<=10){
//         sum+=i;
//         i++;

//     }

//     printf("the sum is %d",sum);

    
//     return 0;
// }

//q6 , do-while loop
// #include <stdio.h>

// int main(){
//     int i=1;
//     int sum=0;

//     do{
//         sum+=i;
//         i++;
//     }while(i<=10);

//     printf("the sum is %d",sum);
//     return 0;
// }

// //for loop
// #include <stdio.h>

// int main(){
//     int sum=0;

//     for(int i=1;i<=10;i++){
        
//         sum+=i;
//     }

//     printf("the sum is %d",sum);
//     return 0;
// }

// //q7
// #include <stdio.h>

// int main(){
//     int sum=0;

//     for(int i=1;i<=10;i++){
        
//         sum+=(8*i);
//     }

//     printf("the sum is %d",sum);
//     return 0;
// }

// //q8

// #include <stdio.h>

// int main(){
//     int product=1;
//     int n=0;

//     for(int i=1;i<=n;i++){
        
//         product*=i;
//     }

//     printf("the factorial is %d",product);
//     return 0;
// }

// //q9

// #include <stdio.h>

// int main(){
//     int product=1;
//     int n=6;
//     int i=1;


//     while(i<=n){
//         product*=i;
//         i++;
//     }

    
//     printf("the factorial is %d",product);
//     return 0;
// }

// //q10 prime no.

// #include <stdio.h>

// int main(){
//     int n=1;
//     int not_prime=0;
//     if(n==0 || n==1){
//         not_prime=1;
//     }
//     else{
//         for (int i=2;i<n;i++){ 
//         if(n%i==0 && n!=2){
//             not_prime=1;
//             break;
//         }
//         }   
        
//     }
//     if (not_prime){
//         printf("%d is not prime\n",n);
//     }
//     else{
//         printf("%d is prime\n",n);
//     }


//     return 0;
// }

//q11
// while (i<n){ 
        // if(n%i==0 && n!=2){
        //     not_prime=1;
        //     break;
        // }
        // i++;
        // }

// #include <stdio.h>

// int main(){
//     int n=8;
//     int not_prime=0;
//     if(n==0 || n==1){
//         not_prime=1;
//     }
//     else{
//         int i=2;
        
//         do
//         {
//                 if (n % i == 0 && n != 2)
//                 {
//                     not_prime = 1;
//                     break;
//                 }
//                 i++;
            
//         }while(i<n);
//     }
//     if (not_prime)
//     {
//         printf("%d is not prime\n", n);
//     }
//     else
//     {
//         printf("%d is prime\n", n);
//     }

//     return 0;
// }



