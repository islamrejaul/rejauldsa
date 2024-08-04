#include<iostream>
using namespace std;

class customer
{
    string name;
    int acc_num,balance;

    // static int total_customer;

    public:
  static int total_customer;

    customer(string a,int b,int c){
        name=a;
        acc_num=b;
        balance=c;
        total_customer++;        
    }


// void display(){
//     cout<<name<<" "<<acc_num<<" "<<balance<<" "<<total_customer<<endl;

// }

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



customer::total_customer=5;   // total customer namok static member k without object access korte par6i karon total customer class r part...etake object r dara o access korte parbo
A1.display_total();

}



