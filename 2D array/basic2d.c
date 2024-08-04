#include <stdio.h>

int main()
{

    // int arr[2][2]={{1,2},{3,4}};
    // for(int i=0;i<2;i++){
    //     for(int j=0;j<2;j++){
    //         printf("%d",arr[i][j]);
    //     }
    //     printf("\n");
    // }

    // arr[0][0]=1;
    // arr[0][1]=2;
    // arr[1][0]=3;
    // arr[1][1]=4;
    // 1 2
    // 3 4

    // int arr[3][3];

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         scanf("%d", &arr[i][j]);
    //     }
    // }

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         printf("%d", arr[i][j]);
    //     }
    //     printf("\n");
    // }




// int r,c;
// printf("enter the number of rows ");
// scanf("%d",&r);
// printf("enter the number of columns ");
// scanf("%d",&c);



// int arr[r][c];
// printf("enter the elements \n");
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             scanf("%d", &arr[i][j]);
//         }
//     }

//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             printf("%d", arr[i][j]);
//         }
//         printf("\n");
//     }





//Q

// int arr[5][5];
// for(int i=0;i<5;i++){
//     for(int j=0;j<5;j++){
//         scanf("%d",&arr[5][5]);
//     }
// }
// for(int i=0;i<5;i++){
//     for(int j=0;j<5;j++){
//         printf("%d",arr[5][5]);
//     }
//     printf("\n");
// }



//Q wap to aad two matrices

int arr[2][2]={1,2,3,4};
int brr[2][2]={5,6,7,8};
int res[2][2];
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
         res[i][j]= arr[i][j]+brr[i][j];
    }
}



for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
       printf("%d",res[i][j]);
    }
    printf("\n");
}






    return 0;
}