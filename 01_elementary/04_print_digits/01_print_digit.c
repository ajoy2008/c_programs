#include <stdio.h>
#include <stdlib.h>

void print_digits(unsigned int num) {
    if(num > 0) {
        print_digits(num/10);
        printf("%d",num%10);  // NOTE : This section of code will be pushed into stack
    }
}

int main(void)
{
    unsigned int num = 0 ;
    int choice = 0 ;

    printf("0 : Program Exit\n");
    printf("1 : Print Digits\n");

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
                printf("\nEnter number to be printed : ");
                scanf("%u", &num);
                printf("\nAfter printing... : ");
                print_digits(num);
                printf("\n");
                break ;

            default :
                printf("\nUnavailable choice!\n");
                exit(EXIT_FAILURE);
        }
    } while(choice) ;

    return 0;
}
