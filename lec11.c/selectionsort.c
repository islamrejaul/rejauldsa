#include <stdio.h>
#include <limits.h>

int main()
{

    int arr[7] = {7, 4, 5, 9, 8, 2, 1};
    int n = 7;
    printf("unsorted array \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    
    // selection sort
    for (int i = 0; i < n - 1; i++)
    {                      // n-1 passes...outer loop just number of passes k denote kore bas that is it
        int min = INT_MAX; // int min r moddhe intezer r maximum value jeta computer store korte pare seta dewa a6e
        int minidx = -1;   // ekhane jkono value dewa jete pare
        for (int j = i; j <= n - 1; j++)
        {
            if (min > arr[j])
            {
                min = arr[j]; // ei loop r dara minimum element peye gelam
                minidx = j;   // ei loop r dara minimum element r index o peye gelam
            }
        }

        // swap min and first element of unsorted part
        // swap minidx wala element and i index wala element
        int temp = arr[minidx];
        arr[minidx] = arr[i];
        arr[i] = temp;
    }

    printf("\n");
    printf("sorted array \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }

    return 0;
}