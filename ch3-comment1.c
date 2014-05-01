/* Written by: Perilous Perry, finished in April 9, 1942
 * AVG.C
 * computes the average of the three grades
*/

#include <stdio.h>
int main (int argc, char *argv[])
{
    float gr1, gr2, gr3;    /* Variables to hold grade */
    float avg;              /* Variables to hold average */
    
    /* Ask for each student's grade */
    printf("What grade did the first student get?");
    scanf("%f",&gr1);
    printf("What grade did the second student get?");
    scanf("%f",&gr2);
    printf("What grade did the third student get?");
    scanf("%f",&gr3);
    
    avg=(gr1+gr2+gr3)/3.0;  // computes average
    printf("\nThe student average is %.2f",avg);
    printf("\n");
    return 0;
} 
