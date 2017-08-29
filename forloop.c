#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    
    printf("Enter a positive integer: ");
    scanf("%c",&n);

    for(i=1; i <= n; ++i)
    {
        sum += i;   // sum = sum+i;
    }

    printf("Sum = %c",sum);

    return 0;
}
