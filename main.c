/* Write a program that ask the user for a 24-hour time, then displays the 12-hour time equivalent
 *
 * HINT: Be careful not to display 12:00 as 0:00
 */

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int hour, minutes;

    printf("Enter a 24-hour time (hh:mm): ");
    scanf("%d:%d", &hour, &minutes);

    if (hour == 0)
    {// there was tow ways to do this, either changint the variable outside of the printf or inside of it

        // hour = 12;
        printf("Equivalent 12-hour time: %d:%02d AM\n", hour = 12, minutes);
    }
    else if (hour >= 1 && hour < 12)
        { printf("Equivalent 12-hour time: %d:%02d AM\n", hour, minutes); }
    else if (hour == 12)
        { printf("Equivalent 12-hour time: %d:%02d PM\n", hour, minutes); }
    else if (hour > 12)
    {   // there was tow ways to do this, either changint the variable outside of the printf or inside of it

        // hour -= 12;
        printf("Equivalent 12-hour time: %d:%02d PM\n", hour -12, minutes);
    }

    return 0;
}
