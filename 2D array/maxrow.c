#include <stdio.h>
#include <limits.h>
int main()
{

    int arr[3][4] = {1, 0, 1, 1, 0, 1, 0, 1, 1, 0, 0, 1};

    int maxcountone = 0;
    int maxindex = -1; // i= ja khusi

    for (int i = 0; i < 3; i++)
    {
        int count = 0;
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] == 1)
                count = count + 1;
        }
        if (maxcountone < count){
            maxcountone = count;
        maxindex = i;
        }
    }

    printf("%d", maxindex);

    return 0;
}