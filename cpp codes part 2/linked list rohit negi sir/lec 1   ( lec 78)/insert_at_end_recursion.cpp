



#include<iostream>
using namespace std;



class node{
    public:
    int data;
    node* next;

node(int value){
    data =value;
    next=NULL;
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


node* head;
head=NULL;

int arr[]={1,2,3,4,5};



head=CreateLinkedList(arr,0,5);     // 1st node r address ta head r moddhe dhuke6e





// print ll



node* temp;
temp=head;

while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
}








}


