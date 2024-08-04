


#include<iostream>
using namespace std;





 class node    
{
    public:
    int val;
    node*next;
    node(int val){
        this->val=val;
        this->next=NULL;
    }
};



// printing using function

void display(node*  &  head){  // pass by reference...a and head r nijosso address same means tara akoi bostu...head r moddhe change korle...a r moddheo change hoye jabe...address same howa mane tader sob same  just name alada...head and a are same thing...
    // cout<<&head<<endl; // head r nijosso address                 
    // head->val=20;
    // cout<<head->val<<endl;



    while(head!=NULL){
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}




//  void display(node*   head){  // pass by value.. a r moddhe j address ta store a6e seta head r moddhe dhuk6e...a r nijosso address ta dhuk6e na...a and head er nijosso address alada..
                           
// // cout<<&head<<endl; // head r nijosso address          // head r moddhe jokhon a r add dhukbe...head k chnage korle a change hobe but head r moddhe jokhon b r add dhukbe..head k change korle b change hobe
// // head->val=20;                                     //    head=head->next
// // cout<<head->val<<endl;


//     while(head!=NULL){
//         cout<<head->val<<" ";
//         head=head->next;
//     }
//     cout<<endl;
// }





int size(node* head){
    node* temp=head;
    int n=1;   // pass by refernce korle head r moddhe NULL dhukbe...a b c d hariye ga6e
    while(temp!=NULL){
        n++;
        temp=temp->next;

    }


    return n;
}


int main(){  


node* a= new node(10);   // dynamic memory allocation


node* b= new node(20);

node* c= new node(30);
node* d= new node(40);




a->next=b;       
b->next=c;
c->next=d;




// printing using function


// cout<<&a<<endl;   // a r nijosso address


display(a);   

// cout<<a->val;




// calculating size of the linked list


 cout<<size(a);

 




}
