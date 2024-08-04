#include <stdio.h>
int main()
{

    int m;
    printf("enter no of rows of the matrix");
    scanf("%d", &m);
    int n;
    printf("enter no of columns of the matrix");
    scanf("%d", &n);

    int a[m][n];

    printf("enter the elements of the matrix\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // print spiral

    int minr = 0;
    int maxr = m - 1;
    int minc = 0;
    int maxc = n - 1;
    int tne = m * n;
    int count = 0;

    while (count < tne)
    {

        // print the minimum row
        for (int j = minc;( j <= maxc && count < tne); j++)
        {
            printf("%d", a[minr][j]);
            count++;
        }
        minr++;
        // if(count >=tne) break;   you can write it in the place of count<tne in every loop
        //  print the maximum column
        for (int i = minr; i <= maxr && count < tne; i++)
        {
            printf("%d", a[i][maxc]);
            count++;
        }
        maxc--;
        // if(count >=tne) break;
        //  print the maximum row
        for (int j = maxc; j >= minc && count < tne; j--)
        {
            printf("%d", a[maxr][j]);
            count++;
        }
        maxr--;
        // if(count >=tne) break;
        //  print the minimum column
        for (int i = maxr; i >= minr && count < tne; i--)
        {
            printf("%d", a[i][minc]);
            count++;
        }
        minc++;
        // if(count >=tne) break;
    }

    return 0;
}