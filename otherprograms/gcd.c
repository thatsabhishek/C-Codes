#include <stdio.h>

int gcd(int num1, int num2)
{
    if (num2 == 0)
        return num1;
    return gcd(num2, num1 % num2);
}

int main()
{
    int num1, num2;
    printf("Enter first numbers: ");
    scanf("%d", &num1);
    printf("Enter second numbers: ");
    scanf("%d", &num2);
    printf("GCD of %d and %d is %d", num1, num2, gcd(num1, num2));
    return 0;
}