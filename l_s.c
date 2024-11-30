#include <stdio.h>
#include <stdlib.h>
int main(){
    int i, key;
    int arr[5]={1,2,5,6,7};
    printf("The array is :\n");
    for ( i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Enter to check the number :\n");
    int count = 0;
    scanf("%d", &key);
    for ( i = 0; i < 5; i++)
    {
        if(key==arr[i])
        {
            count++;
        }
    }
    if (count != 0 ) {
        printf("The number is found.\n");
    }
    else{
    printf("The number is not found .\n");
    }
    // for ( i = 0; i < 5; i++)
    // {
    //     if (key!=arr[i])
    //     {
    //         printf("The number is not found .\n");
    //         break;
    //     }   
    // }
    return 0;
}