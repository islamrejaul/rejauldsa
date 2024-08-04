#include <stdio.h>
#include <stdlib.h>

void push(int *s, int maxsize, int *top)
{
    int data;
    if (*top == maxsize - 1)
    {
        printf("stack is full");
    }
    else
    {
        (*top)++;
        printf("\nenter the data: ");
        scanf("%d", &data);
        s[*top] = data;
    }
}

void pop(int *s, int *top)
{
    int data;
    if (*top == -1)
    {
        printf("stack is empty");
    }
    else
    {
        data = s[*top];
        (*top)--;
        printf("\ndeleted data is %d", data);
    }
}

void display(int *s, int *top)
{
    int i;

    if (*top == -1)
    {
        printf("stack is empty");
    }
    else
    {
        printf("stack elements are...\n\n");
        for (i = *top; i >= 0; i--)
        {
            printf("| %d |\n", s[i]);
        }
    }
}

int main()
{
    int s[20], maxsize, choice, top = -1;
    printf("enter the maxsize: ");
    scanf("%d", &maxsize);
    while (1)
    {
        printf("\n\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
        printf("\nenter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push(s, maxsize, &top);
            break;
        case 2:
            pop(s, &top);
            break;
        case 3:
            display(s, &top);
            break;
        case 4:
            exit(1);
            break;
        default:
            printf("wrong choice....try again..");
        }
    }
    return 0;
}
