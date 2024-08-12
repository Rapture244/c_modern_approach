/* Write a program that accept a date in the form mm/dd/yyyy then display it in different form
 *
 * form: yyyymmdd
 * form: yyyy mm dd
 * form: yyyy/mm/dd
 * form: yyyy.mm.dd
 * form: yyyy-mm-dd
 *
 */

#include <stdio.h>

int main(void)
{
    int mm, dd, yyyy;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &mm, &dd, &yyyy);

    // %04d: Ensures that the year is printed as a four-digit number.
    // %02d: Ensures that both the month and the day are printed as two-digit numbers, with leading zeros if necessary.
    printf("\nYou entered the date (variant 1): %04d%02d%02d", yyyy, mm, dd);
    printf("\nYou entered the date (variant 2): %04d %02d %02d", yyyy, mm, dd);
    printf("\nYou entered the date (variant 3): %04d/%02d/%02d", yyyy, mm, dd);
    printf("\nYou entered the date (variant 4): %04d.%02d.%02d", yyyy, mm, dd);
    printf("\nYou entered the date (variant 5): %04d-%02d-%02d", yyyy, mm, dd);

    return 0;
}
