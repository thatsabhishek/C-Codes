#include <stdio.h>

int main(){
    int n, i, check=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i=2; i<n; i++){
        if (n%i == 0)
            check++;
        else
            continue;
    }
    if (check == 0)
        printf("%d is a prime number.", n);
    else
        printf("%d is not a prime number.", n);
    
    return 0;
}