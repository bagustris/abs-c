/*  Kind of Data
*
*   bagustris@yahoo.com
*   from the boook : absolute beginner to C
*   page: 19 ~
*
*/

#include <stdio.h>
#include <math.h>


int main (int argc, char *argv[])
{
    printf("Kind of Data\n");
        printf("Characters --> char\n");
        printf("Integer --> int\n");
        printf("Floating-point --> float\n");
    
    printf("\nChar\n");    
    //Any of the following can be considered as characters:
    printf("The following are characters:\n'A' 'a' '4' '%' 'Q' '!' '+' '=' ']'\n");
    printf("And here a string:\nC is fun to learn\n");
    
    printf("integer vs float\n");
    int x=1/5;
    printf("For Integer, 1/5=%d\n",x);
    float y=1.0/10.0;
    printf("For float, 1/10=%.5f\n",y);
    return 0;
}
