#include<stdio.h>
#include<string.h>
int main(){


// char str[]="rejaul";
// int x=strlen(str);
// printf("%d",x);


//copying
// char s1[12]="raghav garg";
// char s2[12];
// strcpy(s2,s1);
// printf("%s",s2);



//case

char s1[12]="raghav garg";
char s2[12];
strcpy(s2,s1);
s2[0]='M';
printf("%s",s2);

//strcat

char* s1="raghav garg";  //read only
char* s2="garg";  //read only   ..individual character change kora jay na
strcat(s2,s1);
printf("%s",s1);
//output= error









    return 0;
}