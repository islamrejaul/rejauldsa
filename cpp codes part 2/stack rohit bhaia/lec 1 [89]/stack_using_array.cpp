#include<iostream>
using namespace std;



class stack
{
    int* arr;
    int size;
    int top;

    public:


    bool flag;   //   stack empty hoye gele flag=1 hobe....stack empty na hole flag = 0 hobe...

    // constructor
     stack(int s){   // stack r size
        size=s;
        top=-1;
        arr=new int[s];
        flag=1;   // surute stack empty thake
     }

        // push
          void push(int value){
            if(top==size-1){
                cout<<"stack overflow\n";
                return;
            }
            else{
                top++;
                arr[top]=value;
                cout<<"pushed "<<value<<" into the stack\n";
                flag=0;  // value stack r moddhe push kor6i mane stack empty na

            }
          }
        //pop
         void pop(){
            if(top==-1){
                cout<<"stack underflow\n";
                return;
            }
            else{
                cout<<"popped "<<arr[top]<<" from the stack\n";
                top--;
                if(top==-1) flag=1;
                
            }
         }
         // peek() ... stack r   top element ta k return korbe

               int peek(){
                  if(top==-1){
                cout<<"stack is empty\n"; 

                return -1;

            
            }
            else{
               return arr[top];
                
            }
               }

         //IsEmpty()....  eta stack empty naki empty noy seta bolbe     ...stack empty hole 1 return korbe...empty na hole 0 return korbe
         bool IsEmpty(){

        //     if(top==-1) return true;
        //   else return false;
        return top==-1;    // condition hit korle 1 return korbe r na korle 0 return korbe
            
         }


         //IsSize
         int IsSize(){
            return top+1;       // top array r last element r index k hold kore a6e
         }





};









int main(){






// stack s(5);    // stack r size 5 diye6i means stack r moddhe max 5 ta  element thakte parbe

// s.push(5);
// s.push(6);
// // s.pop();
// // s.pop();
// // s.pop();

// // s.push(5);
// // s.push(6);
// // s.push(5);
// // s.push(6);


// // cout<<s.peek()<<endl;


// // cout<<s.IsEmpty()<<endl;



// cout<<s.IsSize()<<endl;















stack s(5);



s.push(-1);   //  stack r moddhe -1 k dhukiye dilam...stack r moddhe negative no dhoka66i

// s.push(-10);

int val = s.peek();


if(s.flag==0)             // flag=0 means stack is not empty
cout<<val<<endl;







    return 0;
}