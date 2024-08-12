/* Compute the dimensional weight of a box from inputs provided by the user
 *
 * In the USA, the usual method is to divide the volume by 166
 *
 * volume = height * length * width
 *
 * REQUIREMENTS --> The company wants us to round up the dimensional weight as they want an integer
 *
 * MATH TRICK --> Add (divisor - 1) to the volume before dividing. This ensures any remainder results in rounding up to the next whole number.
 *
 ***********************************************************************************************************************
 * TO BE UPGRADED -> as of now, it doesnt work correctly if the users enters non-numeric input
*/

#include <stdio.h>

#define INCHES_PER_POUND 166                // Add a constant variable 

int main(void)
{
    int height, length, width, volume, weigth;

    printf("Enter height of box: ");
    scanf("%d", &height);                   // write the value input by the user into the integer variable 'heigth'

    printf("Enter length of box: ");
    scanf("%d", &length);                   // write the value input by the user into the integer variable 'length'

    printf("Enter width of box: ");
    scanf("%d", &width);                   // write the value input by the user into the integer variable 'width'

    volume = height * length * width;

    weigth = (volume + INCHES_PER_POUND -1) / INCHES_PER_POUND;

    printf("\nVolume (cubic inches): %d\n", volume);            // The OG f-string -> we add an integer variable and we name which one
    printf("Dimensional weight (pounds) : %d\n", weigth);

    return 0;
}

