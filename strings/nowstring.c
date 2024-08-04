#include<stdio.h>
#include<string.h>





int main(){
                                        
// char arr[]="college wallah is 100 % best\0";  /// jokhon only double quote r moddhe elememns   thake....  ekhane \0 na dileo problem nei karon computer nijei automatically bosiye nay
// int i=0;
// while(arr[i]!='\0'){
//     printf("%c",arr[i]);
//     i++;
// }


// char arr[]="college wallah is 100 % best\0";  
// arr[1]=98;   // 'b'...  ascii value of b....98 is not a character...'9' eta print hoto karon 1 ta digit but '98' eta hoto na karon 2 to digit
// int i=0;
// while(arr[i]!='\0'){
//     printf("%c",arr[i]);
//     i++;
// }



// char str[]="college wallah is 100 % best\0";  


// // printf("%s",str);

// // puts(str);
// puts("hello everyone");




// char str[50];
// gets(str);  // entire sentence can be input
// printf("your input was %s",str);




// char str[50];
// scanf("%[^\n]s",str);
// printf("your input was %s",str);


char str[40];
scanf("%s",str);   // &  dileo hobe but and na  dewa tai thik karon string o array r moto pass by reference hoye jay mane address ta send hoye jay
printf("%s",str);





    return 0;
}