
// normal method of error handling

// #include<iostream>
// using namespace std;

// class customer 
// {
//     string name;
//     int balance,account_number;



//     public:
//     customer(string name,int balance,int account_number){
//         this->name=name;
//         this->balance=balance;
//         this->account_number=account_number;
//     }

// //deposit

// void deposit(int amount){
//     if(amount>0){
//         balance+=amount;
//         cout<<amount<<" rs is credited successfully\n";
//     }
//     else cout<<"amount should be greater than 0\n";

// }


// //withdraw

// void withdraw(int amount){
//     if(amount>0 && amount<=balance){
//         balance-=balance;
//         cout<<amount<<" rs is debited successfully\n";
//     }
//     else if(amount<0) cout<<"amount should be greater than 0\n";
//     else cout<<"your balance is low\n";
// }




// };


// int main(){
//     customer C1("rohit",5000,10);
//     C1.deposit(100);
//     C1.withdraw(6000);

// }







// method 2 using try catch throw



// #include<iostream>
// using namespace std;

// class customer 
// {
//     string name;
//     int balance,account_number;



//     public:
//     customer(string name,int balance,int account_number){
//         this->name=name;
//         this->balance=balance;
//         this->account_number=account_number;
//     }

// //deposit

// void deposit(int amount){
//     if(amount<=0){
//        throw "amount should be greater than 0";   // throw statement hit korar por puro fun() e terminate hoye jabe...return r moto kaj korbe....throw r nicher line gulo r execute hobe na
//     }


//    balance+=amount;
//    cout<<amount<<" rs is credited successfully\n";

// }


// //withdraw

// void withdraw(int amount){
//     if(amount>0 && amount<=balance){
//         balance-=balance;
//         cout<<amount<<" rs is debited successfully\n";
//     }

//     else if(amount<0) throw "amount should be greater than 0";


//     else throw "your balance is low";    // ekhan theke string ta throw ho66e ( character array r 1st block r address ta send kor6i)....niche giye catch()  r moddhe dhukbe
// }




// };


// int main(){
//     customer C1("rohit",5000,10);

//     try{  //  try->  je code part ta theke error create ho66e
//     C1.deposit(100);
//     C1.withdraw(6000); // ei line a error asbe so ..ekhan theke direct catch r line a code execute hobe
//     C1.deposit(100);   // ei line ta skip hoye jabe
//     }catch(const char *e)  // character array r 1st block r address ta e namok pointer r moddhe dhuk6e
//     {
//       cout<<" exception occurred : "<<e<<endl;
//     }

// }








// method 3


// ekhane error asbe input dewar time a means runtime a

// #include<iostream>
// using namespace std;

// class customer 
// {
//     string name;
//     int balance,account_number;



//     public:
//     customer(string name,int balance,int account_number){
//         this->name=name;
//         this->balance=balance;
//         this->account_number=account_number;
//     }

// //deposit

// void deposit(int amount){
//     if(amount<=0){
//        throw runtime_error("amount should be greater than 0");   // runtime_error holo akta class
//     }


//    balance+=amount;
//    cout<<amount<<" rs is credited successfully\n";

// }


// //withdraw

// void withdraw(int amount){
//     if(amount>0 && amount<=balance){
//         balance-=balance;
//         cout<<amount<<" rs is debited successfully\n";
//     }

//     else if(amount<0) throw runtime_error("amount should be greater than 0");  


//     else throw runtime_error("your balance is low");    // ei line ta runtime_error class r akta object throw korbe...jeta dhukbe catch r moddhe
// }




// };


// int main(){
//     customer C1("rohit",5000,10);

//     try{  
//     C1.deposit(100);
//     C1.withdraw(6000); 
//     C1.deposit(100);   
//     }catch(const runtime_error &e)  // object ta e r moddhe dhuk6e (pass by reference ho66e)
//     {
//       cout<<" exception occurred : "<<e.what()<<endl;  // e r moddhe object ta pass by reference ho66e..so e.what() ->  e r moddhe j msg ta a6e seta k show korbe.....what()  fun r moddhe "......."  msg ta a6e
//     }

// }




// how above thing is working internally.....




// #include<iostream>
// using namespace std;



// class exception     // backend ei class gulo create hoy
// {
//     protected:
//     string msg;

//     public:

//     exception(string msg){
//         this->msg=msg;

//     }

//     string what(){
//         return msg;
//     }
// };


// class runtime_error : public exception
// {
//  public:
//  runtime_error(const string &msg):exception(msg);   // const ni66i karon j msg ta dhuk6e [ "your balance is low"] seta jano change na hoy 

 
// };





// class customer 
// {
//     string name;
//     int balance,account_number;



//     public:
//     customer(string name,int balance,int account_number){
//         this->name=name;
//         this->balance=balance;
//         this->account_number=account_number;
//     }

// //deposit

// void deposit(int amount){
//     if(amount<=0){
//        throw runtime_error("amount should be greater than 0");   // runtime_error holo akta class
//     }


//    balance+=amount;
//    cout<<amount<<" rs is credited successfully\n";

// }


// //withdraw

// void withdraw(int amount){
//     if(amount>0 && amount<=balance){
//         balance-=balance;
//         cout<<amount<<" rs is debited successfully\n";
//     }

//     else if(amount<0) throw runtime_error("amount should be greater than 0");  


//     else throw runtime_error("your balance is low");    // ei line ta runtime_error namok class r akta object throw korbe...jeta dhukbe catch r moddhe
// }


// };



// int main(){
//     customer C1("rohit",5000,10);

//     try{  
//     C1.deposit(100);
//     C1.withdraw(6000); 
//     C1.deposit(100);   
//     }catch(const runtime_error &e)  // object ta e r moddhe dhuk6e (pass by reference ho66e)
//     {
//       cout<<" exception occurred : "<<e.what()<<endl;  // e r moddhe object ta pass by reference ho66e..so e.what() ->  e r moddhe j msg ta a6e seta k show korbe.....what()  fun r moddhe "......."  msg ta a6e
//     }

// }





// using multiple catch and default catch



// #include<iostream>
// using namespace std;

// class customer 
// {
//     string name;
//     int balance,account_number;



//     public:
//     customer(string name,int balance,int account_number){
//         this->name=name;
//         this->balance=balance;
//         this->account_number=account_number;
//     }

// //deposit

// void deposit(int amount){
//     if(amount<=0){
//        throw runtime_error("amount should be greater than 0");   // runtime_error holo akta class
//     }


//    balance+=amount;
//    cout<<amount<<" rs is credited successfully\n";

// }


// //withdraw

// void withdraw(int amount){
//     if(amount>0 && amount<=balance){
//         balance-=balance;
//         cout<<amount<<" rs is debited successfully\n";
//     }

//     else if(amount<0) throw runtime_error("amount should be greater than 0");  


//     else throw "your balance is low";    // ei line ta runtime_error class r akta object throw korbe...jeta dhukbe catch r moddhe
// }




// };


// int main(){
//     customer C1("rohit",5000,10);

//     try{  
//     C1.deposit(100);
//     C1.withdraw(6000); 
//     C1.deposit(100);   
//     }
//     catch(const runtime_error &e)  // object ta e r moddhe dhuk6e (pass by reference ho66e)
//     {
//       cout<<" exception occurred : "<<e.what()<<endl;  // e r moddhe object ta pass by reference ho66e..so e.what() ->  e r moddhe j msg ta a6e seta k show korbe.....what()  fun r moddhe "......."  msg ta a6e
//     }

// catch(const bad_alloc &e)
// {
//     cout<<" exception occurred : "<<e.what()<<endl;
// }

// catch(...)   // deafult catch...uporer kono catch hit na korle..eta cholbe
// {
//     cout<<"exception occurred :\n";
// }

// }







// how to create custom made exception class

// custom made kor6i kno?  ans-> code ta k ro besi readable ba meaningful  korar jonno..



#include<iostream>
using namespace std;

class InvalidAmountError: public runtime_error   // runtime_error class r property k inherit kor6i... karon  error ta runtime a as6e
{

public:

InvalidAmountError(const string &msg):runtime_error(msg)
{

}



};



// parent class ba runtime_error class ta k dekte par6i na karon ota standard library r moddhe a6e

class InsufficientBalanceError: public runtime_error
{
    public:

InsufficientBalanceError(const string &msg):runtime_error(msg)
{

}

};

class customer 
{
    string name;
    int balance,account_number;



    public:
    customer(string name,int balance,int account_number){
        this->name=name;
        this->balance=balance;
        this->account_number=account_number;
    }

//deposit

void deposit(int amount){
    if(amount<=0){
       throw InvalidAmountError("amount should be greater than 0");   // runtime_error holo akta class
    }


   balance+=amount;
   cout<<amount<<" rs is credited successfully\n";

}


//withdraw

void withdraw(int amount){
    if(amount>0 && amount<=balance){
        balance-=balance;
        cout<<amount<<" rs is debited successfully\n";
    }

    else if(amount<0) throw InvalidAmountError("amount should be greater than 0");  


    else throw InsufficientBalanceError("your balance is low");    // ei line ta runtime_error class r akta object throw korbe...jeta dhukbe catch r moddhe
}




};


int main(){
    customer C1("rohit",5000,10);

    try{  
    C1.deposit(100);
    C1.withdraw(6000); 
    C1.deposit(100);   
    }
    catch(const  InvalidAmountError &e)  // object ta e r moddhe dhuk6e (pass by reference ho66e)
    {
      cout<<" exception occurred : "<<e.what()<<endl;  // e r moddhe object ta pass by reference ho66e..so e.what() ->  e r moddhe j msg ta a6e seta k show korbe.....what()  fun r moddhe "......."  msg ta a6e
    }

catch(const InsufficientBalanceError &e)
{
    cout<<" exception occurred : "<<e.what()<<endl;
}

catch(...)   // deafult catch...uporer kono catch hit na korle..eta cholbe
{
    cout<<"exception occurred :\n";
}

}



