#include<iostream>
using namespace std;




class human 
{

string religion,color;  // private property child class a inherit hobe na...etake sudhu human class r moddhe e access kora jabe
public:    
string name;
int age,weight;




};


class student: private human 
{
    private:
int roll_number,fees; 

//private    // ei data gulo k only student class r moddhe e access kora jabe
// string name;       parent class r  sobkota copy hoye chole es6e without private data of parent class
// int age,weight;    ei inherited data gulor obostha chartwise hobe


public:

 student(string name,int age,int weight,int roll_number,int fees){
    this->name=name;
    this->age=age;
    this->weight=weight;
    this->roll_number=roll_number;
    this->fees=fees;
    // this->religion=religion;  // <- it will give eror karon religion color agulo parent class r private data eigulo child class a copy hobe na..private data k only sei class r moddhe e access kora jay
 }

void display(){
    cout<<name<<" age is "<<age<<" weight is  "<<weight<<" roll number is "<<roll_number<<" fees is "<<fees<<endl;
}


};

class teacher: public human
{
    int salary,id;
};




int main(){


student A("rohit",12,50,23,200);
A.display();
teacher B;
B.name="mohit";

}



