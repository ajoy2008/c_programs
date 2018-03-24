#include <stdio.h>
void swap(int *p, int *q)
{
    int temp = 0;
    temp = *p   ;
    *p   = *q   ;
    *q   = temp ;
}

int main(void)
{
    int a = 10, b = 20 ;
    int temp ;
    printf("Before Swap\n");
    printf("a = %d, b = %d\n", a, b);

    swap(&a, &b);

    printf("After Swap\n");
    printf("a = %d, b = %d\n", a, b);

    return 0 ;
}
