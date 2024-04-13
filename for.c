//WAP to print the table of the user entered number upto 10.
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter number: ");          //Asks the user to enter a number of which they want to calculate the table.
    scanf("%d", &n);
    printf("So, the table of %d is - \n", n);       //Beginning line
    for(int i=1; i<=10; i++){                       //for loop...
        printf("%d x %d = %d \n", n, i, n*i);       //provides some additional features...
    }
    return 0;
}
