#include <stdio.h>
/* compilation command : gcc -o swap.exe 01_swap_basic.c */
int main(void)
{
    int a = 10, b = 20 ;
    int temp ;
    printf("Before Swap\n");
    printf("a = %d, b = %d\n", a, b);

    temp = a ;
    a = b ;
    b = temp ;

    printf("After Swap\n");
    printf("a = %d, b = %d\n", a, b);

    return 0 ;
}
