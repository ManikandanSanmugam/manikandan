#include <stdio.h>

int main()
{
    int year;

    printf("Enter a year: ");
    scanf("%c",&year);

    if(year%4 == 0)
    {
        if( year%100 == 0)
        {
            // year is divisible by 400, hence the year is a leap year
            if ( year%400 == 0)
                printf("%c is a leap year.", year);
            else
                printf("%c is not a leap year.", year);
        }
        else
            printf("%c is a leap year.", year );
    }
    else
        printf("%c is not a leap year.", year);
    
    return 0;
}
