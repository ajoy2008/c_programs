#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int reverse(int num) {
    unsigned int rev = 0;
    while(num > 0) {
        rev = rev*10 + num%10 ;
        num /= 10 ;
    }
    return(rev);
}

int main(void)
{
    int num = 0 ;
    int choice = 0 ;
    int sign = 1 ;
    printf("0 : Program Exit\n");
    printf("1 : Reverse Number\n");

    do
    {
        printf("\nYour Choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 0 :
                printf("\nProgram Exited!\n");
                break ;

            case 1 :
                printf("\nEnter number to be reversed : ");
                scanf("%d", &num);
                if(num < 0) {
                    sign = -1;
                } else {
                    sign = 1 ;
                }
                printf("\nreverse( %d ) = %d\n", num, sign*reverse(abs(num)));
                break ;

            default :
                printf("\nUnavailable choice!\n");
                exit(EXIT_FAILURE);
        }
    } while(choice) ;
}
