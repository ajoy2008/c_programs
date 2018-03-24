#include <stdio.h>

#define PATTERN_0   0
#define PATTERN_1   1
#define PATTERN_2   2
#define PATTERN_3   3
#define PATTERN_4   4
#define PATTERN_5   5

#define PATTERN     PATTERN_5

#if(PATTERN == PATTERN_0)
/*
  OUTPUT :
  * * * * *
  * * * * *
  * * * * *
  * * * * *
  * * * * *
*/
int main(void)
{
  int i,j;
  printf("\n");
  for(i=0; i<5; i++) {
    for(j=0; j<5; j++) {
      printf("* ");
    }
    printf("\n");
  }
  return 0 ;
}
#endif

#if(PATTERN == PATTERN_1)
/*
  OUTPUT :
  *
  * *
  * * *
  * * * *
  * * * * *
*/
int main(void)
{
  int i,j;
  printf("\n");
  for(i=0; i<5; i++) {
    for(j=0; j<=i; j++) {
      printf("* ");
    }
    printf("\n");
  }
  return 0 ;
}
#endif

#if(PATTERN == PATTERN_2)
/*
  OUTPUT :
  * * * * *
  * * * *
  * * *
  * *
  *
*/
int main(void)
{
  int i,j;
  printf("\n");
  for(i=0; i<5; i++) {
    for(j=0; j<(5-i); j++) {
      printf("* ");
    }
    printf("\n");
  }
  return 0 ;
}
#endif

#if(PATTERN == PATTERN_3)
/*
  OUTPUT :
  * * * * *
    * * * *
      * * *
        * *
          *
*/
int main(void)
{
  int i,j,k;
  printf("\n");
  for(i=0; i<5; i++){
    for(j=0; j<i; j++){
      printf("  "); // Note : If you want to increase the spacing add space here
    }
    for(k=0; k<(5-i); k++){
      printf("* ");
    }
    printf("\n"); // Note : If you want to increase the spacing add space in left side
  }
  return 0 ;
}
#endif

#if(PATTERN == PATTERN_4)
/*
  OUTPUT :
          *
        * *
      * * *
    * * * *
  * * * * *

*/
int main(void)
{
  int i,j,k;
  printf("\n");
  for(i=0; i<5; i++) {
    for(j=0; j<(5-1-i); j++) {
      printf("  "); // Note : If you want to increase the spacing add space here
    }
    for(k=0; k<=i; k++) {
      printf("* "); // Note : If you want to increase the spacing add space in left side
    }
    printf("\n");
  }
  return 0 ;
}
#endif

#if(PATTERN == PATTERN_5)
/*
  OUTPUT :
          *                *
        * *               * *
      * * *  -------->   * * *
    * * * *             * * * *
  * * * * *            * * * * *
*/

int main(void)
{
  int i,j,k;
  printf("\n");
  for(i=0; i<5; i++){
    for(j=0; j<(5-1-i); j++){
      printf(" ");
    }
    for(k=0; k<=i; k++){
      printf(" *");
    }
    printf("\n");
  }
  return 0 ;
}
#endif