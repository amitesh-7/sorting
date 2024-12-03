#include <stdio.h>

int main()
{
    int i, n, temp, min, j;
    printf("Enter the number of elements of array.\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array .\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i+1; j < n; j++)
        {
            if (arr[j] > arr[min])
            {
                min = j;
            }
        }
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
    }
    printf("\nThe sorted elements are :\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}