#include<iostream>
using namespace std;


class customer
{
// public: // data k  public kore dilam...main funtion theke direct data k change korte parbo

string name;
int account_number,balance;

public:  // data k private kore dilam...main function theke direct data k change kora jabe na..function r maddhome condition check korar por data k chnage korbo

int age;

customer(string name,int account_number,int balance,int age){
    this->name=name;
    this->account_number=account_number;
    this->balance=balance;
this->age=age;
}

void deposit(int amount){
    if(amount>0){
        balance+=amount;

    }
    else
    cout<<"invalid amount\n";
}


void withdrawl(int amount){
    if(amount<=balance && amount>0){
        balance-=amount;
    }
    else
    cout<<"invalid amount\n";

}

void display(){
    cout<<name<<" "<<account_number<<" "<<balance<<" "<<age<<endl;
}





};


int main(){


customer A1("rohit",1,1000,3);
customer A2("mohit",1,1800,4);
customer A3("mohan",1,2000,8);

// data public korar por

// A1.balance+=-10;  //  -10 taka credit eta somvov na.......oikarone direct access dewa thik na...without checking data change hoye jay
// A1.display();  // 10 taka fellam but 10 taka kome galo

// data private korar por

A1.deposit(-10);  // -10 taka credit kora somvob na tai deposit ho66e na


A1.age=-5;  // age namok data part ta public kora a6e..tai user wrong age input dite par6e..oikarone age k private kore...function r moddhe contion rekhe age chnage korte hobe
A1.display();


}