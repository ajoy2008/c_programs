#include <stdio.h>
#include <stdlib.h>

/*
rev(12345)
5*10 + rev(1234)
(5*10 + 4)*10 + rev(123)
(((((0*10 + 5)*10 + 4)*10 + 3) * 10 + 2) * 10 + 1)
*/

#if 0
/* This is a kind of non-reentrant program */
unsigned int reverse_rec(unsigned int num) {
    static unsigned int rev = 0;
    if(num == 0) {
        return(rev) ;
    } else if(num > 0) {
        rev = rev*10 + num%10 ;
        reverse_rec(num/10);
    }
}
#endif

#if 1
/* This demonstrate the conversion from non-reentrant to reentrant program */
unsigned int reverse_rec(unsigned int num) {
    static unsigned int rev = 0;
    unsigned int temp = 0 ;
    if(num == 0) {
        temp = rev ;
        rev = 0 ;
        return(temp) ;
    } else if(num > 0) {
        rev = rev*10 + num%10 ;
        reverse_rec(num/10);
    }
}
#endif

int main(void)
{
    unsigned int num = 0 ;
    int choice = 0 ;

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
                scanf("%u", &num);
                printf("\nreverse( %u ) = %u\n", num, reverse_rec(num));
                break ;

            default :
                printf("\nUnavailable choice!\n");
                exit(EXIT_FAILURE);
        }
    } while(choice) ;
}
