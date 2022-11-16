#include <stdio.h>
int main()
{
    int num = 0, i = 0, c = 0;
    printf("Enter a number >> ");
    scanf("%d", &num);
    for (i = 2; num > 1; i++)
    {
        while (num % i == 0)
        {
            num /= i;
            c++;
        }
    }
    if (c == 2)
    {
        printf("Number is cute");
    }
    else
    {
        printf("It is not a cute Number");
    }
    return 0;
}
// End Of Program
