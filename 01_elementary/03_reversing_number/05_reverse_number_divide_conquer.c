/*
                      rev(1234)
                       /   \
                 rev(12)    rev(34)       <-- Divide into sub problems
                 / \            / \
             rev(1) rev(2)  rev(3) rev(4) <-- Divide into sub problems
               |     |        |     |
               1     2        3     4     <-- No more division possible
                \   /          \   /
                 \ /            \ /
                  21             43       <-- Start conquering solution from subproblems
                    \           /
                     \         /
                      \       /
                       \     /
                        \   /
                         4321             <-- Get the final solution from conquering the subproblems result

*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int reverse(int n, int d){
    int first,last,di,dj;
    if(n<10) {
        return n;
    } else {
        di    = (int)pow(10, d-d/2);
        first = reverse(n/di, d/2);
        last  = reverse(n - (n/di)*di, d-d/2);
        dj    = (int)pow(10,d/2);
        return last*dj + first;
    }
}

int main(void)
{
    unsigned int num = 0 ;
    unsigned int digits = 0 ;
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
                printf("\nProvide number of digits of the entered number: ");
                scanf("%u", &digits);
                printf("\nreverse( %u ) = %u\n", num, reverse(num, digits));
                break ;

            default :
                printf("\nUnavailable choice!\n");
                exit(EXIT_FAILURE);
        }
    } while(choice) ;
}
