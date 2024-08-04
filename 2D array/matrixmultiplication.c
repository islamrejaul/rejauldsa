#include <stdio.h>
int main()
{

    // int a[3][2] = {1, 2, 3, 4, 5, 6};

    // int b[2][4] = {1, 2, 3, 4, 5, 6, 7, 8};

    // int res[3][4];

    // // multiplying

    // int cr = 2; // cr= n/p
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         // ith row of a [][] and j th column of b[][]
    //         //(a[i][0],a[i][1],a[i][2]......)*(b[0][j],b[1][j],b[2],[j].....)    ekhane 1st 2to element e multiply hobe karon k=2

    //         res[i][j] = 0;
    //         for (int k = 0; k < cr; k++)
    //         {
    //             res[i][j] += (a[i][k] * b[k][j]);
    //         }
    //     }
    // }

    // // print res

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {

    //         printf("%d ", res[i][j]);
    //     }
    //     printf("\n");
    // }

    // after taking input

    int m;
    printf("enter no of rows of 1st matrix");
    scanf("%d", &m);
    int n;
    printf("enter no of columns of 1st matrix");
    scanf("%d", &n);

    int a[m][n];
    //  input the 1st matrix
    printf("enter the elements of 1st matrix\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int p;
    printf("enter no of rows of 2nd matrix");
    scanf("%d", &p);
    int q;
    printf("enter no of columns of 2nd  matrix");
    scanf("%d", &q);

    int b[p][q];
    //  input the 2nd matrix
    printf("enter the elements of 2nd matrix\n");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // check
    if (n != p)
    {
        printf("the matrices cannot be multiplied");
    }

    // multiplying

    int res[m][q];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            // ith row of a [][] and j th column of b[][]

            res[i][j] = 0;
            for (int k = 0; k < p; k++)
            {
                res[i][j] += (a[i][k] * b[k][j]);
            }
        }
    }
    printf("the resultant matrix is \n");
    // print res

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {

            printf("%d ", res[i][j]);
        }
        printf("\n");
    }

    return 0;
}