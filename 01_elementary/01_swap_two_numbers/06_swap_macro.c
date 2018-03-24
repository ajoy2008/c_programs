#include <stdio.h>
//#define SWAP(x,y) (x = (x+y) - (y=x))
#define SWAP(x,y) (x^=y^=x^=y)

int main(void)
{
    int a = 10, b = 20 ;
    printf("Before Swap\n");
    printf("a = %d, b = %d\n", a, b);

    SWAP(a, b);

    printf("After Swap\n");
    printf("a = %d, b = %d\n", a, b);

    return 0 ;
}
