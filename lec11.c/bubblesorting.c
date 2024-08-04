#include <stdio.h>
#include <stdbool.h>

// int main()
// {

//     int arr[5] = {5, 4, 3, 2, 1};
//     int n = 5;
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d", arr[i]);
//     }
//     // bubble sort...
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = 0; j <= n - 2; j++)       // NOT OPTIMISED CODE
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }
//     printf("\n");
// for (int i = 0; i < 5; i++)
//     {
//         printf("%d", arr[i]);
//     }

// optimised code

// int main()
// {

//     int arr[5] = {5, 4, 3, 2, 1};
//     int n = 5;
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d", arr[i]);
//     }
//     // bubble sort...
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = 0; j <= n - 2 - i; j++) // OPTIMISED CODE
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
//     printf("\n");
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d", arr[i]);
//     }





// optimization of nearly sorted  array

int main()
{

    int arr[5] = {5, 4, 3, 2, 1};
    int n = 5;
    for (int i = 0; i < 5; i++)
    {
        printf("%d", arr[i]);
    }
    // bubble sort...
    for (int i = 0; i < n - 1; i++)
    {
        bool flag = true; // array is already sorted 
        for (int j = 0; j <= n - 2 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = false;  // array is not sorted yet
            }
        }

        if(flag==true) break;
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d", arr[i]);
    }

    return 0;
}