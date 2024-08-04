#include <stdio.h>

int main()
{

   int a;  //operand
   scanf("%d",&a);
  char ch;      // +,-,*,/   operator
scanf("%c",&ch);
int b;
scanf("%d",&b);
 

switch(ch){   // expression a ch k dilam karon otar upor e sob dependent if tao ch r upor depend kor6e


case '+':
printf("%d",a+b);
break;

case '-':
printf("%d",a-b);
break;

case '*':
printf("%d",a*b);
break;

case '/':
printf("%f",(float)a/b);    // a ta k float baniye diye6i
break;
default:
printf("invalid operator");

}











 
    return 0;
}