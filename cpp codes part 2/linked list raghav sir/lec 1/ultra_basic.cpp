#include<iostream>
using namespace std;


// example 1


// class node
// {
//     public:
//     int val;
//     node*next;
// };

// int main(){
//     node a;
//     a.val=10;
//     node b;
//     b.val=20;
//     node c;
//     c.val=30;
//     node d;
//     d.val=40;
// // forming ll
// a.next=&b;
// b.next=&c;
// c.next=&d;
// d.next=NULL;



// }




// example 2



//  class node    // ll node
// {
//     public:
//     int val;
//     node*next;
//     node(int val){
//         this->val=val;
//         this->next=NULL;
//     }
// };

// int main(){
//     node a(10);     // static memory allocation 

//     node b(20);
  
//     node c(30);
  
//     node d(40);
    
// // forming ll
// a.next=&b;
// b.next=&c;
// c.next=&d;



// cout<<b.val<<endl;
// cout<<(*a.next).val<<endl;   // a r next a jar address a6e sekhane jao ...tar val k print koro......dereference operator
// cout<<(a.next)->val<<endl;




// b.next->val=70;
// cout<<c.val<<endl;


// c node r value k print korbo only using a

// cout<<((a.next)->next)->val<<endl;


// d node r value k print korbo only using a

//    *(a.next).next  eta holo c r address        (a.next) eta holo b r address ... *(a.next) eta holo b

//   *(*(a.next).next) eta holo c

//   *(*(a.next).next).next    etaholo d r address

//     *( *(*(a.next).next).next)   eta holo d


// cout<< (*(( *((*(a.next)).next)).next)).val<<endl;
// cout<<(((a.next)->next)->next)->val<<endl;


// }







// example 3


// using loop




//  class node    // ll node
// {
//     public:
//     int val;
//     node*next;
//     node(int val){
//         this->val=val;
//         this->next=NULL;
//     }
// };

// int main(){
//     node a(10);     // static memory allocation 

//     node b(20);
  
//     node c(30);
  
//     node d(40);
    
// // forming ll
// a.next=&b;
// b.next=&c;
// c.next=&d;



// node temp=a;   // temp and a are different node. their address are differnt but the inner materials are same


// while(1){
//     cout<<temp.val<<" ";
//     if(temp.next==NULL) break;
//     temp=*(temp.next);
// }



// }







// example 3

// dynamic memory allocation



 class node    // ll node
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

// void display(node*  &  head){  // pass by reference....head and a are same thing

//     while(head!=NULL){
//         cout<<head->val<<" ";
//         head=head->next;
//     }
//     cout<<endl;
// }






void display(node*   head){ // pass by value
                           
    while(head!=NULL){
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}







int size(node* head){      // pass by refernce korle head r moddhe NULL dhukbe...a b c d hariye ga6e
    node* temp=head;
    int n=0;
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

// now a b c d become node datatype r ba node class r pointer  jar moddhe node r address store hobe

(*a).next=b;   // a pointer r moddhe jar address a6e sekhane jao means....heap r moddhe j node ta create hoye6e sei address a jao...sei node r "next" r moddhe j address a6e seta b pointer r moddhe dhukiye dao
// a->next=b;         a.next=b eta hobe na karon a holo akta pointer ...pointer r moddhe access korar jonno -> eta use korte hoy
b->next=c;
c->next=d;



// for traversing the ll


// node* temp=a;

// while(temp!=NULL){
//     cout<<temp->val<<" ";      // temp->val   means temp r moddhe jar( j node r) address a6e sekhane jao and tar value print koro
//     temp=temp->next;
// }







// accessing b using a


// cout<<a->next->val;

// printing value of c using a

// cout<<a->next->next->val;







// printing using function


display(a);   






// calculating size of the linked list


 cout<<size(a);

 




}










