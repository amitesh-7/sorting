#include <stdio.h>

int main()
{
    int i, key, n, a, b, c, count = 0;
    printf("Enter the numbers to be present in array .\n");
    scanf("%d", &n);
    printf("Enter the elements of array in ascending order :\n");
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    a = 0;
    b = n - 1;
    printf("Enter the number to be found :-\n");
    scanf("%d", &key);
    for (; i < n;)
    {
        c = (a + b) / 2;
        if (key == arr[c])
        {
            count = 1;
            break;
        }
        else if (key < arr[c])
        {
            b = c - 1;
        }
        else if (key > arr[c])
        {
            a = c + 1;
        }
    }
    if (count)
    {
        printf("The number is found .\n");
    }
    else
    {
        printf("The number is not found .\n");
    }
    return 0;
}