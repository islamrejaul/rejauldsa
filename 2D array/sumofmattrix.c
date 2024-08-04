#include<stdio.h>
int main(){

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

// int sum=0;
// for(int i=0;i<r;i++){
//     for(int j=0;j<c;j++){
//         sum=sum+arr[i][j];
//     }
// }
// printf(" the sum of given matrix is %d",sum);





//Q sum of part of matrix



int arr[4][5]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};

int sum=0;
for(int i=0;i<3;i++){
    for(int j=1;j<5;j++){
        sum=sum+arr[i][j];
    }
}
printf(" the sum of given part of matrix is %d",sum);












    return 0;
}