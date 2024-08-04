#include<iostream>
using namespace std;



class Node
{
    public:
    int data;
    Node* next;

    Node(int value){
        data=value;
        next=NULL;
    }




};


class stack
{
    Node* top;
    int size;       // stack r size ta bolbe means stack r moddhe total kota elements a6e seta bolbe...

    public:

    stack(){
        top=NULL;
        size=0;

    }

   

   // push
   void push(int value){
    Node* temp=new Node(value);    // heap r moddhe memory allocation ho66e...onek node create korle heap memory full hoye jabe...tokhon r notun node create hobe na...so temp r moddhe NULL dhukbe
    if(temp==NULL){
        cout<<"stack overflow\n";
        return;
    }
    else{
    temp->next=top;
    top=temp;
    size++;
    cout<<"pushed "<<value<<" into the stack\n";

   }

   }

    // pop 
    void pop(){
          if(top==NULL){
            cout<<"stack underflow\n";
            return;
          }
          else{
            Node* temp2=top;
            cout<<"popped "<<top->data<<" from the stack\n";
            top=top->next;
            delete temp2;
            size--;

          }
    }


    // peek    stack r top element ta k return korbe

             int peek(){
                if(top==NULL){   //  stack is empty
                cout<<"stack is empty\n";
                    return 0;   
                }

                else{
                    return top->data;
                }
             }

         
        // IsEmpty
        bool IsEmpty(){
            if(top==NULL) return 1;   //  stack empty thakle 1 return korbe
             else return 0;
        }
             
            // IsSize     stack r size return korte hobe
            int IsSize(){
                 return size;
            }



};








int main(){


stack s;
s.push(16);
s.push(62);
s.push(6);
s.push(60);


// s.pop();

// cout<<s.IsSize();

// cout<<s.peek();  // eta k flag use kore edge case ta handle korte hobe like stack using array



cout<<s.IsEmpty()<<endl;









    return 0;
}