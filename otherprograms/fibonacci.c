#include <stdio.h>

void fib(int n){
    int a=0, b=1, sum=0;
    printf("%d %d ",a, b);
    while (n-2 > 0){
        sum = a+b;
        printf("%d ", sum);
        a = b;
        b = sum;
        n--;
    }
}

int main(){
    int num;
    printf("Enter a number to print Fabonacci Series: ");
    scanf("%d", &num);
    fib(num);
    printf("...");
    return 0;
}