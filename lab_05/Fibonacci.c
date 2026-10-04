#include <stdio.h>

int main()
{
    int n, num1 = 0, num2 = 1, nextnum;

    printf("Nehal Parwal\n");

    printf("enter the number of fibonacci series print : ");
    scanf("%d", &n);

    printf("Fibonacci Series");

    for(int i = 1; i <= n; ++i)
    {
        printf("%d", num1);

        nextnum = num1 + num2;
        num1 = num2;
        num2 = nextnum;
    }

    return 0;
}
