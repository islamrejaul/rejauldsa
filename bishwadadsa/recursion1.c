#include <stdio.h>

// Q print 1 to n or n to 1

// void print(int);
// int main()
// {

//     int i, n;
//     printf("enter the n");
//     scanf("%d", &n);
//     print(n);

//     return 0;
// }

// void print(int n)
// {

//     if (n == 0)    // it is base case
//         return;

//     printf("%d\n", n);
//          print(n-1);
// }

//  Q print array element in reverse order using recursion

// void print(int a[],int n);
// int main()
// {

//     int i, n ,a[20];
//     printf("enter the array size");
//     scanf("%d", &n);
//     printf("enter the array elements\n");
// for(i=0;i<=n-1;i++){
//     scanf("%d",&a[i]);
// }
//  printf("array elements in reverse order is\n");
//     print(a,n-1);

//     return 0;
// }

// void print(int a[],int n)
// {

//     if (n == -1)    // it is base case
//         return;

//      // normal print bolle interchange kore debo last two line
//     printf("%d", a[n]);
//  print(a,n-1);

// }

//  Q  FACTORIAL USING RECURSION

// int factorial(int);

// int main()
// {

//     int i, n, fact;
//     printf("enter the n");
//     scanf("%d", &n);
//     fact = factorial(n);
//     printf("factorial of %d is  %d ", n, fact);

//     return 0;
// }

// int factorial(int n)
// {
//     if (n == 1 || n == 0)
//         return 1;
//     else
//         return factorial(n - 1) * n; // it is not tail recuirsion
// }



// Q factorial using tail  recursion

// int factorial(int,int);

// int main()
// {

//     int i, n, fact;
//     printf("enter the n");
//     scanf("%d", &n);
//     fact = factorial(n, 1);
//     printf("factorial of %d is  %d ", n, fact);

//     return 0;
// }

// int factorial(int n, int i)   //tail recursive function
// {
//     if (n == 1 || n == 0)
//         return 1;
//     else
//         return factorial(n - 1, n * i);
// }



//  Q gcd of two number using recursion     ///gosagu


int GCD(int,int);
int main(){
    int x,y,gcd;
    printf("enter the two numbers");
    scanf("%d%d",&x,&y);
    gcd=GCD(x,y);
    printf("GCD of %d and %d is %d",x,y,gcd);





}  
      //  dry run of this code is in a folder named recursion

int GCD(int x,int y){  
    if(x==y)
    return x;
    else if(x>y)
    return GCD(x-y,y);
    else
    return GCD(x,y-x);
}
















