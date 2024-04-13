//WAP to print the sum of all numbers b/w 5 and n including 5 and n...
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter numbe : ");       //Asks the user to enter number.
    scanf("%d", &n);
    int sum = 0;
    for(int i=5; i<=n; i++){
        sum = sum + i;
    }
    printf("So, the sum between 5 and %d is %d", n, sum);
    return 0;
}
