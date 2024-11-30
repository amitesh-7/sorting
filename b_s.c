#include <stdio.h>

int main(){
    int i, key, n, a, b, c, count;
    printf("Enter the numbers to be present in array .\n");
    scanf("%d", &n);
    printf("Enter the elements of array in ascending order :\n");
    int arr[n];
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    a=0;
    b=n-1;
    printf("Enter the number to be found :-\n");
    scanf("%d", &key);
    for ( i = 0; i < n; i++)
    {
        c=(a+b)/2;
        if (key==arr[c])
        {
            count++;
        }
        if (key<arr[c])
        {
            b=n-1/2;
            a=0;
        }
        if (key>arr[c])
        {
            a=n-1/2;
            b=n-1;
        }
        i++;
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