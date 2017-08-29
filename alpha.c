#include <stdio.h>
int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%d",&d);

    if( (d>='a' && c<='z') || (d>='A' && d<='Z'))
        printf("%d is an alphabet.",d);
    else
        printf("%d is not an alphabet.",d);

    return 0;
}
