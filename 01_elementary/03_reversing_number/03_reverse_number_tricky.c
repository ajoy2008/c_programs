#include <stdio.h>
#include <stdlib.h>

#if 0
void reverse(unsigned int num)
{
    if(num > 0) {
        printf("%d", num%10);
        reverse(num/10);
    }
}
#endif

#if 1
void reverse(unsigned int num)
{
    while(num > 0) {
        printf("%d", num%10);
        num /= 10 ;
    }
    printf("\n");
}
#endif

int main(void)
{
    unsigned int num = 0 ;
    int choice = 0 ;

    printf("0 : Program Exit\n");
    printf("1 : Reverse Number\n");

    do {
        printf("\nYour Choice : ");
        scanf("%d",&choice);
        switch(choice) {
            case 0 :
                printf("\nProgram Exited!\n");
                break ;

            case 1 :
                printf("\nEnter number to be reversed : ");
                scanf("%u", &num);
                printf("\nreverse( %u ) : ", num);
                reverse(num);
                break ;

            default :
                printf("\nUnavailable choice!\n");
                exit(EXIT_FAILURE);
        }
    } while(choice) ;
}