/* Write a program that computes the volume of a sphere with a 10-meters radius
 *
 * Use the formula v = (4/3)*pi*r^(3)
 *
 * -> Write 4/3 as (4.0f/3.0f)
 * -> C doesn't have an exponention operator , u'll need to multiply r by itself 3 times
 * -> radius = r
 */

#include <stdio.h>

#define PI 3.14159
#define RADIUS 10

int main(void)
{
    float volume;

    volume = (4.0f/3.0f) * PI * (RADIUS * RADIUS * RADIUS);

    printf("The volume of a 10-meter radius sphere is: %f", volume);

    return 0;
}
