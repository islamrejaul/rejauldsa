#include <stdio.h>
int main()
{

    // int n;
    // printf("enter the no of rows");
    // scanf("%d",&n);
    // int m;
    // printf("enter the no of stars in each line");
    // scanf("%d",&m);

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=m;j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    //     int nsp=n;
    // for(int i=1;i<=n;i++){

    //     for(int j=1;j<=nsp;j++){

    //         printf("*");
    //     }
    //     nsp--;
    //     printf("\n");

    // for(int i = 1; i <= n; i++)
    // {
    //         int a=1;
    //     for (int j = 1; j <=i; j++)

    //     {
    //         printf("%d",a);
    //         a=a+2;
    //     }
    //     printf("\n");
    // }

    // for(int i=1;i<=n;i++){
    //   int a=1;
    //     for(int j=1;j<=i;j++){
    //        int d=a+64;
    //         char ch=(char)d;
    //         printf("%c",ch);
    //         a++;
    //     }
    //     printf("\n");
    // }

    // for(int i=1;i<=n;i++){
    // if(i%2==0){
    //     for(int j=1;j<=i;j++){
    //         int a=j+64;
    //         char ch=(char)a;
    //         printf("%c",ch);

    //     }
    // }
    // else{
    //     for(int j=1;j<=i;j++){

    //         printf("%d",j);

    //     }
    // }

    //     printf("\n");
    // }

    // for (int i = 1; i <= n; i++)
    // {
    //     int a = 1;
    //     for (int j = 1; j <= i; j++)
    //     {

    //         int d = a + 64;
    //         char ch = (char)d;

    //         if (i % 2 == 0)
    //         {
    //             printf("%c", ch);
    //             a++;
    //         }
    //         else
    //         {
    //             printf("%d", j);
    //         }
    //     }
    //     printf("\n");
    // }

    int n;
    printf("enter the no of rows");
    scanf("%d", &n);
    int m;
    printf("enter the no of columns");
    scanf("%d", &m);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (i == 1 || i == n || j==m||j==1)
            {

                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}