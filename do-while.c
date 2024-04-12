//WAP to asks the user to enter a number, until the number is not a multiple of 7.
#include<stdio.h>
#include<math.h>
int main(){
    int n;

    do{                                    //do{the loop}
        printf("Enter number: ");          //Asks the user to enter a number
        scanf("%d", &n);
        printf("%d is a multiple of 7. \n", n);

        if(n % 7 != 0){            //if(condition)
            break;
        }
    } while(1);{                                      //while statement
        printf("%d is not a multiple of 7. \n", n);
        printf("Thank you.");
    }
    return 0;
}
