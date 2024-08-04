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

int main()
{

    node *head;
    head = NULL;

    int arr[] = {1, 2, 3, 4, 5};

    head = CreateLinkedList(arr, 0, 5); // 1st node r address ta head r moddhe dhuke6e

    //   int x=1;    // 1st node ta k delete koro...x=1

    int x = 3; // 3rd node k delete korte bol6e

        if (head != NULL)
    {

        // 1st node delte korte bolle eta cholbe
        if (x == 1)
        {
            node *temp = head;
            head = head->next;
            delete temp;
        }

        // rest jkono node k delete korte bolle eta cholbe (except 1st node)

        else // x=3 means 3 no node k delete korte bol6e
        {
            node *curr = head;
            node *prev = NULL;
            x--;
            while (x--)
            {
                prev = curr;
                curr = curr->next;
            }
            prev->next = curr->next;
            delete curr;
        }
    }

    // print ll

   node* temp3 = head;

    while (temp3 != NULL)
    {
        cout << temp3->data << " ";
        temp3 = temp3->next;
    }
}
