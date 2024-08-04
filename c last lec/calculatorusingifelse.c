#include <stdio.h>

int main()
{

   int a;  //operand
   scanf("%d",&a);
  char ch;      // +,-,*,/   operator
scanf("%c",&ch);
int b;
scanf("%d",&b);
 

if(ch=='+')
printf("%d",a+b);

if(ch=='-')
printf("%d",a-b);
if(ch=='*')
printf("%d",a*b);
if(ch=='/')
printf("%f",(float)a/b);











 
    return 0;
}