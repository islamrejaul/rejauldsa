#include<stdio.h>
#include<string.h>
int main(){

char str[]="raghav";
char ptr[7];
strcpy(ptr,str);
printf("%s\n",str);   //str r ptr 2to alada string toiri hoye ga6e
printf("%s\n",ptr);
str[0]='m';
printf("%s\n",str);
printf("%s\n",ptr);









return 0;

}