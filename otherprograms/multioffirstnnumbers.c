#include <stdio.h>

int main(){
    int n, mul = 1;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        mul *= i;
    }
    printf("The multiplication of first %d numbers is %d", n, mul);
    return 0;
}