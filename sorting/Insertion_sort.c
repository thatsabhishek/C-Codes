#include <stdio.h>

int main()
{
    int n, a[50], k, j, i, temp;
    printf("Enter the number of element: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter a[%d]:- ", i);
        scanf("%d", &a[i]);
    }
    for (k = 0; k < n; k++)
    {
        temp = a[k];
        j = k - 1;
        while (temp < a[j] && j >= 0)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = temp;
    }
    printf("Sorted Array\n");
    for (j = 0; j < n; j++)
    {
        printf("%d\t", a[j]);
    }

    return 0;
}
