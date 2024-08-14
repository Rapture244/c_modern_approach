/* Write a program that calculate how many digits a number has
 *
 * You mais assume that the max number is: 4 digits
 *
 * HINT: use if statements to test the number
 * EX: if the number is between 0 and 9, it has 1 gigit
 * EX: if the number is between 10 and 99, it has 2 digits
 * Etc... until 4
 */

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int number;

    printf("Enter a 4 digit number: ");
    scanf("%d", &number);

    if (number >= 0 && number <= 9)
        printf("The number %d has: 1 digit\n", number);
    else if (number >= 10 && number <= 99)
        printf("The number %d has: 2 digits\n", number);
    else if (number >= 100 && number <= 999)
        printf("The number %d has: 3 digits\n", number);
    else if (number >= 1000 && number <= 9999)
        printf("The number %d has: 4 digits\n", number);
    else
        printf("The number %d is out of range (more than 4 digits)\n", number);


    return 0;
}
