#include <stdio.h>

int is_armstrong_number(int num) {
    int n = num;
    int r, x, i;
    int a = 0, sum_of_digits = 0;
    while (n > 0) {
        n /= 10;
        a++;
    }
    n = num;
    while (n > 0) {
        r = n % 10;
        x = 1;
        for(i=0; i<a; i++)
            x *= r;
        sum_of_digits += x;
        n = n / 10;
    }
    if (sum_of_digits == num)
        return 1;
    else
        return 0;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int armstrong_num = is_armstrong_number(n);
    if (armstrong_num)
        printf("Yes, number %d is an armstrong number", n);
    else
        printf("No, number %d is not an armstrong number", n);
    return 0;
}
