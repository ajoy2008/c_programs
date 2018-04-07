#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>
/** Program to convert temperature using command line arguments */
void print_usage() {
    printf("Usage: ./your_program --c2f num\n");
    printf("Usage: ./your_program --f2c num\n");
}

int c_to_f(float celsius) {
    float fahrenheit;
    fahrenheit = (1.8 * celsius) + 32;
    printf("%.2f degC ===> %.2f degF\n", celsius, fahrenheit);
    return 0 ;
}

int f_to_c(float fahrenheit) {
    float celsius ;
    celsius= (fahrenheit - 32) / 1.8;
    printf("%.2f degF ===> %.2f degC\n",fahrenheit, celsius);
}

int main(int argc, char *argv[]) {
    int opt= 0;
    int area = -1, perimeter = -1, breadth = -1, length =-1;
    float celsius, fahrenheit;
    int c_flag = 0, f_flag = 0 ;

    //Specifying the expected options
    //The two options l and b expect numbers as argument
    static struct option long_options[] =
    {
        {"c2f", required_argument, 0,  'c' },
        {"f2c", required_argument, 0,  'f' },
        {0,           0,           0,   0  }
    };

    int long_index =0;
    while ((opt = getopt_long_only(argc, argv,"", long_options, &long_index )) != -1) {
        switch (opt) {
            case 'c' :
                if(c_flag){
                    print_usage();
                } else {
                    c_flag++;
                }
                celsius = atof(optarg);
                c_to_f(celsius) ;
                break ;
            case 'f' :
                if(f_flag){
                    print_usage();
                } else {
                    f_flag++;
                }
                fahrenheit = atof(optarg);
                f_to_c(fahrenheit) ;
                break ;
            default:
                print_usage();
                exit(EXIT_FAILURE);
        }
    }
    return 0;
}
