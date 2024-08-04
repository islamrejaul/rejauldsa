#include <stdio.h>
int main()
{



//opening a file

// FILE* ptr = fopen("raghav.txt","r");    // r means only read ho66e   read mode






//reading a file    or we can say printing a file

// FILE* ptr = fopen("raghav.txt","r");    // r means only read ho66e   read mode
// char str[70];
// while(fgets(str,70,ptr)!=NULL)     // while r jaygay if likle 1 tai line print hobe
// printf("%s",str);






//creating a file


// FILE* ptr = fopen("pw.txt","w");   // w means write mode



// writing to a file


FILE* ptr = fopen("pw.txt","w");   


char str[]="placement lagegi sirf yehinse \n i am don";
fputs(str,ptr);    // string ta k  ptr file r moddhe diye di66i

fclose(ptr);   // closing the file













return 0;
}