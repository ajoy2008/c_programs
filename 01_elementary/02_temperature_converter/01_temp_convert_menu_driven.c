#include <stdio.h>
#include <stdlib.h>

int c_to_f(void) {
    float celsius, fahrenheit;
    printf("\nEnter temp in Celsius : ");
    scanf("%f", &celsius);

    fahrenheit = (1.8 * celsius) + 32;
    printf("\nTemperature in Fahrenheit : %.2f ", fahrenheit);
    return 0 ;
}

int f_to_c(void) {
    float celsius, fahrenheit;
    printf("\nEnter temperature in Fahrenheit: ");
    scanf("%f",&fahrenheit);
    celsius= (fahrenheit - 32) / 1.8;
    printf("Temperature in Celsius: %.2f",celsius);
}

int main(void)
{
    int choice = 0 ;
    printf("0 : No temperature conversion operation(Exit)\n");
    printf("1 : Convert C to F\n");
    printf("2 : Convert F to C\n");
    do
    {
        printf("\nYour Choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 0 :
                printf("\nProgram terminated!\n");
                break ;

            case 1 :
                c_to_f();
                break ;

            case 2 :
                f_to_c();
                break ;
            default :
                printf("\nUnavailable choice!\n");
                exit(EXIT_FAILURE);
        }
    } while(choice) ;
}