/* Write a program that breaks down an ISBN entered by a user
 *
 * ISBN assigned after January 1, 2007 contains 13 digits, arranged in 5 groups:
 * Older ISBN contains 10 digits
 *
 * Groups:
 * 1. GSI prefix: either 978 or 979
 * 2. group identifiers specifies the language or the country of origin
 * 3. The publisher code identifies the publisher
 * 4. An item number is assigned by the publisher to identify a specific book
 * 5. An ISBN end with a check digit that is used to verify the accuracy of the preceding digits
 *
 * Note: The number of digits in each groups may vary, you can't assume that groups have the length show in this example : 978-0-393-97950-3
 *
 * Test yur porogram with actual ISBN
 */

#include <stdio.h>

int main(void)
{
    int gsi_prefix, group_identifier, publisher_code, item_number, check_digit;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gsi_prefix, &group_identifier, &publisher_code, &item_number, &check_digit);

    printf("\nGSI prefix: %d\n", gsi_prefix);
    printf("Group identifier: %d\n", group_identifier);
    printf("Publisher code: %d\n", publisher_code);
    printf("Item number: %d\n", item_number);
    printf("Check digit: %d\n", check_digit);


    return 0;
}
