//WAP to print all the number b/w n to 10, but avoid 7 from the sequence...
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter the initial number: ");       //Asks the user to enter the initial number 
    scanf("%d", &n);
    for(int i=n; i<=10; i++){           //loop created
        if(i==7){                   //skip
            continue;
        }
        printf("%d \t", i);         //prints the sequence, except 7
    }
    return 0;
}
