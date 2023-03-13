#include <stdio.h>

// Linear search traverses the entire array to find the desired element we want to search. This method works both in sorted as well as
// unsorted array.

int linearSearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {4, 1, 35, 72, 11, 6, 3, 42};
    int size = sizeof(arr) / sizeof(int);
    int element = 12;
    int search = linearSearch(arr, size, element);
    if (search == 1)
    {
        printf("Element %d Found in the array", element);
    }
    else
    {
        printf("Element %d not found in the array", element);
    }
    return 0;
}