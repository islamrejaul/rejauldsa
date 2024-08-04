#include <stdio.h>
int main()
{

    // int marks[10]={95,90,31,25,100,50,65,89,97,30};

    // for(int i=0;i<10;i++){
    //     if(marks[i]<35)
    //     printf("%d ",i);
    // }

    // int arr[5]={1,2,3,4,5};
    // int x;
    // printf("enter the no");
    // scanf("%d",&x);
    // int count=0;
    // for(int i=0;i<=4;i++){
    // if(arr[i]>x)
    // count=count+1;
    // }

    // printf("%d",count);

    // Q
    //  int arr[7]={1,2,3,4,5,6,7};
    //  int sumofeven =0;
    //  int sumofodd=0;
    //  for(int i=0;i<=6;i++){
    //      if(i%2==0)
    //      sumofeven=sumofeven+arr[i];
    //      else
    //      sumofodd=sumofodd+arr[i];
    //  }

    // printf("%d",sumofeven-sumofodd);

    // Q
    //  int arr[8]={1,2,3,4,5,6,7,8};
    //  int totalpairs=0;
    //  int x=12;    //given no
    //  for(int i=0;i<=7;i++){
    //  for(int j=i+1;j<=7;j++){
    //      if(arr[i]+arr[j]==x)
    //      totalpairs=totalpairs+1;
    //      // printf("(%d,%d)\n",arr[i],arr[j]);
    //  }
    //  }

    // printf("%d",totalpairs);

    // Q
    // int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    // int totaltriplets = 0;
    // int x = 12; // given no
    // for (int i = 0; i <= 7; i++)
    // {
    //     for (int j = i + 1; j <= 7; j++)
    //     {
    //         for (int k = j + 1; k <= 7; k++)
    //         {
    //             if (arr[i] + arr[j] + arr[k] == x)
    //                 totaltriplets = totaltriplets + 1;

    //         }

    //     }
    // }

    // printf("%d", totaltriplets);

    // int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    // int totaltriplets = 0;
    // int x = 12; // given number

    // for (int i = 0; i <= 5; i++)
    // {
    //     for (int j = i + 1; j <= 6; j++)
    //     {
    //         for (int k = j + 1; k <= 7; k++)
    //         {
    //             if (arr[i] + arr[j] + arr[k] == x)
    //             {
    //                 totaltriplets = totaltriplets + 1;
    //                 printf("(%d,%d,%d) \n", arr[i], arr[j], arr[k]);
    //             }
    //         }
    //     }
    // }

    // printf("%d", totaltriplets);

    // Q second largest element

    // int arr[7] = {1,2,3,4,4,2,1};
    // int max = arr[0];
    // int smax = arr[0];
    // for (int i = 1; i <= 6; i++)
    // {
    //     if (max < arr[i])
    //     {
    //         max = arr[i];
    //     }
    // }
    // for (int i = 1; i <= 6; i++)
    // {
    //     if (max!=arr[i] && smax<arr[i])
    //     {
    //         smax = arr[i];
    //     }
    // }

    // printf("%d", smax);




//2nd method using 1 loop

  int arr[7] = {1,2,3,4,4,2,1};
    int max = arr[0];
    int smax = arr[0];
    for (int i = 1; i <= 6; i++)
    {
        if (max < arr[i])
        {
            smax=max;  //smax is now previous max
            max=arr[i]; //max is now a previous max
        }

        else if(smax<arr[i] && max!=arr[i])
        smax=arr[i];
    }
    

    printf("%d", smax);








    return 0;
}
