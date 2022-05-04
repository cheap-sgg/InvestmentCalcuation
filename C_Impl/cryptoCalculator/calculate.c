/* 
*
*   PROGRAM PURPOSE: Calculate total return on investments ~ C implementation 
*   DATE LAST MODIFED: 4/20/2021 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void returnCalc();
void returnAmount();

int main()
{

    /* amount */
    char input[6];
    printf("calculate AMOUNT, or RETURN: ");
    scanf("%s", input);

    while (strcmp(input, "AMOUNT") && strcmp(input, "RETURN"))
    {
        printf("INVALID INPUT: Choose Either AMOUNT or RETURN\n");
        printf("calculate AMOUNT, or RETURN: ");
        scanf("%s", input);
    }

    if (!strcmp(input, "return") || !strcmp(input, "RETURN"))
    {
        returnCalc(); /* <- function returns the calculated result */
    }
    else if (!strcmp(input, "amount") || !strcmp(input, "AMOUNT"))
    {
        returnAmount();
    }

    return 0;
}

void returnCalc()
{

    double buying_pow = 0.0, low_price = 0.0, high_price = 0.0;

    printf("Enter your current net worth: $");
    scanf("%lf", &buying_pow);

    printf("Enter the coins low price: $");
    scanf("%lf", &low_price);

    printf("Enter the coins high price: $");
    scanf("%lf", &high_price);

    double returnRes = buying_pow / low_price * high_price - buying_pow;

    printf("*****************************\n\n");

    /* calculate investment variables based on user input */
    printf("TOTAL RETURN        -> $%.2lf\n", returnRes);

    printf("RETURN CALCULATION  -> %.2lf / %lf * %lf - %.2lf = $%.2lf\n\n", buying_pow, low_price, high_price, buying_pow, returnRes);

    printf("NEW PORTFOLIO VALUE -> $%.2lf\n\n", (buying_pow / low_price) * high_price);

    printf("*****************************\n");
}

void returnAmount()
{
    double buying_pow = 0.0, low_price = 0.0;

    printf("Enter your current net worth: $");
    scanf("%lf", &buying_pow);

    printf("Enter the asset's price: $");
    scanf("%lf", &low_price);

    printf("\nTotal amount of asset purchased: %.2lf\n\n", buying_pow / low_price);
}
