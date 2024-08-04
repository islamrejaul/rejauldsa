#include<stdio.h>
#include<limits.h>
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

// int max= INT_MIN;
// for(int i=0;i<r;i++){
//     for(int j=0;j<c;j++){
//         if(max<arr[i][j]){
//             max=arr[i][j];
//         }
//     }
// }
// printf(" max element is %d",max);








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

int min= INT_MAX;
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        if(min>arr[i][j]){
            min=arr[i][j];
        }
    }
}
printf(" min element is %d",min);



















    return 0;
}