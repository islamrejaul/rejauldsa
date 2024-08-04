#include<iostream>
using namespace std;


// static member function


class customer
{
    string name;
    int acc_num,balance;

    static int total_customer;   // static data member private a6e

    public:


    customer(string a,int b,int c){
        name=a;
        acc_num=b;
        balance=c;
        total_customer++;        
    }

static void acccessStatic(){
     total_customer=9;  // static data member private a6e but ta sotteo eke change ba access kor6i
    // cout<<total_customer<<endl;
}



void display_total(){
    cout<<total_customer<<endl;
}

};

int customer::total_customer=0;


int main(){


    customer A1("rohit",1,1000);
    customer A2("mohit",2,1010);
    // A1.display_total();
    // A2.display_total();
    customer A3("mohan",3,3000);
//   A1.display_total();



customer::acccessStatic();

A1.display_total();

}



