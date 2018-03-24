#include <stdio.h>
int main(void)
{
    int a = 10, b = 20 ;
    int temp ;
    printf("Before Swap\n");
    printf("a = %d, b = %d\n", a, b);

    a = a ^ b ;
    b = b ^ a ; // b = b ^ (a ^ b) = (b ^ b) ^ a = 0 ^ a = a   (NOTE : XOR with same number results to zero)
    a = a ^ b ; // a = (a ^ b) ^ a = (a ^ a) ^ b = 0 ^ b = b

    printf("After Swap\n");
    printf("a = %d, b = %d\n", a, b);

    return 0 ;
}
