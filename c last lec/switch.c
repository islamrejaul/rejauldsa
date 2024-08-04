#include <stdio.h>

int main()
{

    int n;
    printf("enter day number (1-7)");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("tuesday\n");
        break;
    case 4:
        printf("thursday\n");
        break;
    case 5:
        printf("friday\n");
        break;
    case 3:
        printf("wednesday\n");
        break;
    case 6:
        printf("saturday\n");
        break;
    case 7:
        printf("sunday\n");
        break;

    default:
        printf("invalid number\n");
        // ekhane break lekhar dorkar nei  karon eta last
    }

    return 0;
}