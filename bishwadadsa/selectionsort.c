#include <stdio.h>
#include <limits.h>

int main()
{

   int n,max,m,i,j,a[20],t;
   printf("enter size of n");
   scanf("%d",&n);
printf("enter the data\n");
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
  



    for ( i = 0; i < n - 1; i++)
    {                      
        m=0; 
        max=a[0];   
        for ( j = 0; j < n - i; j++)
        {
            if (a[j]>max)
            {
                max = a[j]; 
                m = j;  
            }
        }
        if((j-1)!=m){
         t= a[m];
        a[m] = a[j-1];
        a[j-i] = t;
        }
    }

    printf("\n");
    printf("sorted array \n");
    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }

    return 0;
}