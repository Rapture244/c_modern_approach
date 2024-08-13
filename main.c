/* Write a program that format product information entered by the user.
 *
 * HINT: the item number and date should left justified, the unit price should be right justified
 * HINT: Allow for dollar amount up to $9999.99
 * HINT: Use tab
 *
 */

#include <stdio.h>

int main(void)
{
    int item_number, mm, dd, yyyy;
    float price;

    printf("Enter item number: ");
    scanf("%d", &item_number);

    printf("Enter unit price: ");
    scanf("%f", &price);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &mm, &dd, &yyyy);

    printf("\nItem\t\tUnit\t\tPurchase\n");
    printf("\t\tPrice\t\tDate\n");

    /* The %7.2f format specifier ensures the price is right-justified within a field of 7 characters,  with 2 digits after the decimal point.
     * The total width of 7 allows for the maximum value $9999.99.
     *
     * Explanation:
     * - 1 character for the dollar sign ($)
     * - 4 characters for the digits before the decimal point (up to 9999)
     * - 1 character for the decimal point (.)
     * - 2 characters for the digits after the decimal point (.99)
    */
    printf("%-d\t\t$%7.2f\t%.2d/%.2d/%d\n", item_number, price, mm, dd, yyyy);


    return 0;
}
