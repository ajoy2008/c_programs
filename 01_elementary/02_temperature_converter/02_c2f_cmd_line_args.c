#include <stdio.h>
#include <stdlib.h>

int c_to_f(float celsius) {
    float fahrenheit;
    fahrenheit = (1.8 * celsius) + 32;
    printf("\n%.2f degC ===> %.2f degF", celsius, fahrenheit);
    return 0 ;
}

int main(int argc, char *argv[])
{
    float celsius ;

    /* If no parameter passed to program print error message and exit */
    if (argc < 2){
        printf("Usage: c2f temperature\n");
        exit(EXIT_FAILURE);
    }

    /* Convert first command line parameter to float */
    celsius = atof(argv[1]);

    c_to_f(celsius) ;

    return 0;
}