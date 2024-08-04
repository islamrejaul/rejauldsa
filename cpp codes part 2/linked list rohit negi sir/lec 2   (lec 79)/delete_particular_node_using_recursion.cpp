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

node *CreateLinkedList(int arr[], int index, int size)
{
    // base case
    if (index == size)
    {
        return NULL;
    }

    node *temp;
    temp = new node(arr[index]);

    temp->next = CreateLinkedList(arr, index + 1, size);

    return temp;
}



node* deleteNode(node *head,int x)
{
    //   Handle the case where the list is empty
    if (head == NULL) {
        return NULL;
    }
    
    node* curr = head;
    
  
    if (x == 1) {
        node* temp = curr->next;
        delete curr;
        return temp;
    }
    
  
    curr->next = deleteNode(curr->next, x - 1);
    return curr;
}





int main()
{

    node *head;
    head = NULL;

    int arr[] = {1, 2, 3, 4, 5};

    head = CreateLinkedList(arr, 0, 5); // 1st node r address ta head r moddhe dhuke6e


    int x;
    x=3;    // 3 no node ta k delete koro
      

head=deleteNode(head, x);



    // print ll

   node* temp3 = head;

    while (temp3 != NULL)
    {
        cout << temp3->data << " ";
        temp3 = temp3->next;
    }
}

