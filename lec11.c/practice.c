#include <stdio.h>

int main()
{

int n=7;
    int arr[7]={6,1,2,3,4,9,9};
    
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                printf("%d", arr[i]);
                break;
            }
        }
    }

    return 0;
}