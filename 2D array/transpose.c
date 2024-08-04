#include<stdio.h>
int main(){





//q without storing the transpose in a separate array

int r;
int c;
printf("enter the no of rows");
scanf("%d",&r);
printf("enter the no of columns");
scanf("%d",&c);
printf("enter all the elements\n");
int arr[r][c];
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        scanf("%d",&arr[i][j]);
    }
}


for(int j=0;j<c;j++){  //c=3 r=2 
    for(int i=0;i<r;i++){
           printf("%d",arr[i][j]);
    }
    printf("\n");
}







//Q store it in a separate matrix ba array


// int r;
// int c;
// printf("enter the no of rows");
// scanf("%d",&r);
// printf("enter the no of columns");
// scanf("%d",&c);
// printf("enter all the elements\n");
// int arr[r][c];
// for(int i=0;i<r;i++){
//     for(int j=0;j<c;j++){
//         scanf("%d",&arr[i][j]);
//     }
// }

// int brr[c][r];
// for(int i=0;i<c;i++){  //c=3 r=2 
//     for(int j=0;j<r;j++){
//            brr[i][j]=arr[j][i];
//     }
// }



// for(int i=0;i<c;i++){  //c=3 r=2 
//     for(int j=0;j<r;j++){
//          printf("%d",brr[i][j]);
//     }
//     printf("\n");
// }







    return 0;
}