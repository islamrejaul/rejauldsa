

#include<iostream>
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



node* CreateLinkedList(int arr[],int index,int size){
      // base case
      if(index==size){
        return NULL;
      }

node* temp;
temp=new node(arr[index]);

temp->next=CreateLinkedList(arr,index+1,size);

return temp;







}








int main(){





node* head =NULL;

int arr[]={1,2,3,4,5};


head=CreateLinkedList(arr,0,5);     // ll already toiri hoye ready a6e... 1 2 3 4 5 



// insert node at particular position     



int x=3;   // insert position...3 no node r por
int value=30;

node* temp=head;


// x=x-1;       // x-- post increment....first use then increment

x--;

// --x;

// cout<<x--<<endl;    // x=x-1

//  cout<<x<<endl;





while(x--){
    temp=temp->next;
  
}
// cout<<x<<endl;

node*temp2=new node(value);



temp2->next=temp->next;
temp->next=temp2;





// print ll

   
  node*  temp3 = head;

    while (temp3 != NULL)
    {
        cout << temp3->data << " ";
        temp3 = temp3->next;
    }






}
















