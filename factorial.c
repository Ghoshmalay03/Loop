// WAP to print the factorial of a number 
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter number : ");
    scanf("%d", &n);
    int factorial = 1;
    for(int i=n; i>=1; i--){
        factorial=factorial*i;
    }
    printf("So, the factorial of %d is %d", n, factorial);
    return 0;
}
