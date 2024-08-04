#include <stdio.h>
int main()
{

    // int a,b,c;
    // scanf("%d%d%d",&a,&b,&c);
    // if(a<b && a<c) printf("%d is the smallest",a);
    // else if(b<a && b<c) printf("%d is the smallest",b);
    // else if(c<a && c<b) printf("%d is the smallest",c);

    // int a;
    //   scanf("%d",&a);
    //   if((a%100==0 && a%400==0)&&(a%100!=0 && a%4==0)) printf("%d is leap year",a);
    //   else printf("%d is not leap year",a);

    // int sum=0;
    // int lastdigit=0;
    // while(a!=0){

    // lastdigit=a%10;
    // sum=sum+lastdigit;
    // a=a/10;

    // }

    // printf("%d",sum);

    // int ld=0;
    // int rev=0;

    // while(a!=0){
    // ld=a%10;
    // rev=rev+ld;
    // rev=rev*10;
    // a=a/10;

    // }
    // rev=rev/10;

    // printf("%d",rev);

    // int a;
    // scanf("%d",&a);

    // if(a%a==0 && a%1==0) printf("%d is prime no",a);
    // else printf("the no is not prime");

    // int a,b,c;
    // printf("enter three numbers");
    // scanf("%d%d%d",&a,&b,&c);
    // if(a>b && a>c) printf("%d is the largest\n",a);
    //  if(b>a && b>c) printf("%d is the largest\n",b);
    // if(c>a && c>b) printf("%d is the largest\n",c);
    // if(a<b && a<c) printf("%d is the smallest\n",a);
    // if(b<a && b<c) printf("%d is the smallest\n",b);
    // if(c<a && c<b) printf("%d is the smallest\n",c);

    int n;
    printf("enter the no");
    scanf("%d", &n);
    if (n == 1)
        printf("%d is neither prime nor composite", n);
    int a = 0;
    for (int i = 2; i <= n - 1; i++)
    {

        if (n % i == 0)
        {
            a = 1;
            // break;   ekhaneo break lagbe na
        }
    }

        if (a == 1)
            printf("the number is composite");

        if (a == 0)
            printf("the number is prime");





















        return 0;



    }