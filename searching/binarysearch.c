#include <stdio.h>

// Binary search works only on a sorted array. Here we have a upper bound and a lower bound and we check the middle element of the array
// if the element is at mid we found it. if element is smaller than mid that we set mid as the high or upper bound and if the element is
// greater than mid then we set low to mid.

int binarySearch(int arr[], int size, int element)
{
    int low, mid, high;
    low = 0;
    high = size - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return 1;
        }
        else if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1;
}

int main()
{

    int arr[] = {2, 4, 7, 12, 13, 17, 21, 24, 36};
    int size = sizeof(arr) / sizeof(int);
    int element = 22;
    int search = binarySearch(arr, size, element);
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