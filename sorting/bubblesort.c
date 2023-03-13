#include <stdio.h>

int main()
{
    int input, i, j, temp;

    printf("How many elements you want to enter ? ");
    scanf("%d", &input);
    int arr[input];
    printf("\nEnter %d elements below\n", input);
    for (i = 0; i < input; i++)
    {
        printf("Enter %d element: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\nUnsorted Array: ");
    for (i = 0; i < input; i++)
    {
        if (i == 0)
        {
            printf("[%d,", arr[i]);
        }
        else if (i == input - 1)
        {
            printf("%d]", arr[i]);
        }
        else
        {
            printf("%d,", arr[i]);
        }
    }
    for (j = 0; j < input - 1; j++)
    {
        for (i = 0; i < input - 1; i++)
        {
            if (arr[i + 1] < arr[i])
            {
                temp = arr[i + 1];
                arr[i + 1] = arr[i];
                arr[i] = temp;
            }
        }
    }

    // Printing Sorted Array.
    printf("\nSorted Array: ");
    for (i = 0; i < input; i++)
    {
        if (i == 0)
        {
            printf("[%d,", arr[i]);
        }
        else if (i == input - 1)
        {
            printf("%d]", arr[i]);
        }
        else
        {
            printf("%d,", arr[i]);
        }
    }
    return 0;
}
