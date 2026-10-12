#include <stdio.h>

int main(){
    int n,h=1;
    printf("enter value\n");
    scanf("%d",&n);

    do{
       printf("%d\n",h);
       h++;
    } while (h<=n);
    
    return 0;
}