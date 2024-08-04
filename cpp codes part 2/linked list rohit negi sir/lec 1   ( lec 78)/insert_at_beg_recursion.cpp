

#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int value)
    {
        data = value;
        next = NULL;
    }
};

node *CreateLinkedList(int arr[], int index, int size, node *prev)
{
    // base case
    if (index == size)
    {
        return prev;
    }

    node *temp;
    temp = new node(arr[index]);

    temp->next = prev;

    return CreateLinkedList(arr, index + 1, size, temp);
}

int main()
{

    node *head;
    head = NULL;

    int arr[]={1, 2, 3, 4, 5};

    head = CreateLinkedList(arr, 0, 5, NULL); // staring a prev r value NULL hobe....ekhane head k o pass korte partam...karon head r moddhe NULL a6e

    // print ll

    node *temp;
    temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}


