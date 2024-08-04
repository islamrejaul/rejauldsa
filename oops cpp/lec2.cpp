#include<iostream>
using namespace std;

class customer
{

  string name;
  int accountnumber;
  int balance;
public:

customer()  // default constructor
{
    // cout<<"hello constructor\n";
    name="rohit";
    accountnumber=5;
    balance =100;

}

// customer(string a,int b,int c){ // parameterised constructor
//     name=a;
//     accountnumber=b;
//     balance=c;
// }


inline customer(string a,int b,int c):name(a),accountnumber(b),balance(c){  // inline contructor

}

// constructor overloading
customer(string a,int b){
    name=a;
    accountnumber=b;
    balance =29;  // direct ekhaneo value dewa jay without passing argument from main function
}

 // copy constructor
 customer(customer &B)
 {
    name=B.name;
    accountnumber=B.accountnumber;
    balance=B.balance;
 }

void display(){
    cout<<name<<" "<<accountnumber<<" "<<balance<<endl;
}




};


int main(){
    customer A1;
    customer A2;
    customer A3("rohit",23,1000);//  A3 first a default constructor r ka6ei  jabe but sekhane parameter na thakar karone value dhukbe na tai ....next a parameterised constructor ta call hobe
    customer A4("mohit",25);  // balace r garbage value print ho66e
    customer A5(A4); // copy constructor
    A1.display();
    A2.display();
    A3.display();
    A4.display();
    A5.display();
    customer A6;  // assignment operator
    A6=A4;    //  eivabeo copy kora jay
    A6.display();
}














