#include<stdio.h>
int main(){

// int arr[5]={2,4,6,8,1};
// arr[4]=100;  // {2,4,6,8,100}
// printf("%d",arr[4]);


// float a[3]={1.2,3.4,5.7};
// printf("%f",a[2]);
  
// char arr[4]={'a','n','Y','%'};
// printf("%c",arr[3]);


// int arr[5];
// arr[0]=1;
// arr[1]=3;
// arr[2]=4;
// arr[3]=10;
// arr[4]=2;

// printf("%d",arr[3]);

// int arr[4];
// printf("enter first element");
// scanf("%d",&arr[0]);
// printf("enter second element");
// scanf("%d",&arr[1]);
// printf("enter third element");
// scanf("%d",&arr[2]);
// printf("enter fourth element");
// scanf("%d",&arr[3]);

// printf("%d",arr[3]);

// int arr[5]={2,4,6,8,1};

// for(int i=0;i<=4;i++)
// printf("%d",arr[i]);


int arr[5];
for(int i=0;i<=4;i++){
    printf("enter element number %d\n",i+1);
    scanf("%d",&arr[i]);
    
}
for(int i=0;i<5;i++)
printf("%d",arr[i]);



    return 0;
}