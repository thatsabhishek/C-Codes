#include <stdio.h>

int main()
{
     int n, num, digit, rev = 0;

     printf("Enter a positive number: ");
     scanf("%d", &num);
     n = num;

     while (num != 0) {
         digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
     }

     printf(" The reverse of the number is: %d \n" , rev);

     if (n == rev)
        printf(" The number is a palindrome.");
     else
        printf(" The number is not a palindrome.");

    return 0;
}