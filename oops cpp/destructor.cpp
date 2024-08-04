#include<iostream>
using namespace std;


class customer{

    string name;
    int* data;

    public:

    customer(){
        name="rohit";
        data=new int;
        *data=10;
        cout<<"constructor is called\n";

    } 
// destructor
~customer(){    // same nam hobe as constructor...1 bar e create hobe sesh a...no returntype..no argument...sobar last a call hobe
       delete data;  // data namok pointer jake point kor6ilo heap r moddhe seta k delete korlam..data pointer r moddhe j address ta chilo seta remove kore dilam
  cout<<"destructor is called\n";    // user na create korle..automatically compiler create korbe

}


};


int main(){

customer A1;







}












