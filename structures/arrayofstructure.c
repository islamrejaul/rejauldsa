#include<stdio.h>
#include<string.h>



int main(){



typedef struct pokemon{
    int hp;
    int speed;
    int attack;
    char tier;
    char name[50];
} pokemon;

// pokemon pikachu;   //pikachu nam r akta dabba(variable) toiri holo jar datatype holo pokemon
// pokemon  charizard;


// pokemon arr[10];   //10 ta storage location toiri hoye6e and every storage location a 1 ta kore pokemon r details a6e

// arr[0].attack=50;    // arr[0]=1st pokemon
// arr[0].hp=100;
// arr[0].speed=0;
// arr[0].tier='A';




pokemon arr[3];   

arr[0].attack=50;    
arr[0].hp=100;
arr[0].speed=30;
arr[0].tier='A';
strcpy(arr[0].name,"pikachu");

arr[1].attack=150;    
arr[1].hp=90;
arr[1].speed=60;
arr[1].tier='c';
strcpy(arr[1].name,"charizard");

arr[2].attack=50;    
arr[2].hp=130;
arr[2].speed=70;
arr[2].tier='s';
strcpy(arr[2].name,"mewtwo");

for(int i=0;i<3;i++){   // same way te scan o kora jabe just printf r jaygat scanf likte hobe 

printf("%s\n",arr[i].name);
printf("%d\n",arr[i].attack);
printf("%d\n",arr[i].hp);
printf("%d\n",arr[i].speed);
printf("%c\n",arr[i].tier);


}



    return 0;
}