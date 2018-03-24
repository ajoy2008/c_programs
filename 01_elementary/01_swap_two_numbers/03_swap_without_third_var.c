#include <stdio.h>
int main(void)
{
    int a = 10, b = 20 ;
    int temp ;
    printf("Before Swap\n");
    printf("a = %d, b = %d\n", a, b);

    a = a + b ;
    b = a - b ;
    a = a - b ;

    printf("After Swap\n");
    printf("a = %d, b = %d\n", a, b);

    return 0 ;
}
