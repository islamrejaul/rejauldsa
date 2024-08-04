#include<iostream>
using namespace std;




class human  //parent class
{

// private:  private kore dile...human class r baire kothao theke eke access kora jabe na
// public:

string color;

protected:      // protected data k child class ba derived class theke access korte parbo
string name;
int age,weight;




};

//child class
class student: protected human // human class r sobkota data ba attributes student class r moddhe chole es6e...but human class r private data gulo asbe na
{
    private:
int roll_number,fees; // rollno fees ei data gulo inherited na...eta child class r nijosso data

//protected:
// string name;       parent class r  sobkota copy hoye chole es6e without private data of parent class
// int age,weight;    ei inherited data gulor obostha chartwise hobe


public:

 void fun(string n,int a,int w){    // name age weight protected obosthay a6e...but within the class protected data k change kora jay
    name=n;
    age=a;
    weight=w;
}

void display(){
    cout<<name<<" "<<age<<" "<<weight<<" ";
}


};


int main(){


student A;

A.fun("rohit",10,50);   // fun k access korte par6i karon fun public obosthay a6e
A.display();


}



