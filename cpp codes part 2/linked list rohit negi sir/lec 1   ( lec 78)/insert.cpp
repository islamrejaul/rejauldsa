

// insert at begining

// #include<iostream>
// using namespace std;

// class node
// {
//     public:
//     int data;
//     node* next;

//     node(int value){
//         data=value;
//         next=NULL;
//     }

// };

// int main(){

// node* head;
// head=NULL;   // initially head r moddhe ki6u nei tai NULL diye6i

// if(head==NULL){
//     head=new node(5);
// }

// else{
//     node*temp;
//     temp=new node(50);
//     temp->next=head;
//     head=temp;
// }

// }




// inserting elements of array into ll (insert at begining)




// #include <iostream>
// using namespace std;

// class node
// {
// public:
//     int data;
//     node *next;

//     node(int value)
//     {
//         data = value;
//         next = NULL;
//     }
// };

// int main()
// {

//     node *head;
//     head = NULL; // initially head r moddhe ki6u nei tai NULL diye6i

//     int arr[] = {1, 2, 3, 4, 5};

//     for (int i = 0; i < 5; i++)
//     {

//         if (head == NULL)
//         {
//             head = new node(arr[i]);
//         }

//         else
//         {
//             node *temp;
//             temp = new node(arr[i]);
//             temp->next = head;
//             head = temp;
//         }
//     }

// // print the value of the ll

// node* temp=head;

// while(temp!=NULL){
//     cout<<temp->data<<" ";
//     temp=temp->next;

// }

// }





// inserting elements of array into ll (insert at end)



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

int main()
{

    node *head, *tail;
    tail = head = NULL;

    int arr[] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++)
    {

        // ll is empty

        if (head == NULL)
        {
            head = new node(arr[i]);
            tail=head;
        }

        // ll exist

        else{
            tail->next=new node(arr[i]);
            tail=tail->next;

        }




    }



// printing the ll

node* temp;
temp=head;

while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
}




}













