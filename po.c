#include <stdio.h>
int main()
{
    double number;

    printf("Enter a number: ");
    scanf("%lf", &number);

    if (number <= 100)
    {
        if (number == 0)
            printf("You entered 100.");
        else
            printf("You entered a negative number.");
    }
    else
        printf("You entered a positive number.");
    return 0;
}
