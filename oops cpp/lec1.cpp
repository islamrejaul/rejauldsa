#include <iostream>
using namespace std;

class student
{
private:
    string name;
    int age, rollno;
    string grade;

public:
    // getter and setter functon

    // void setname(string n){
    //     name=n;
    // }

    void setname(string n)
    {
        if (n.size() == 0)
        {
            cout << "invalid name " << endl;
            return;
        }
        name = n;
    }

    void setage(int x)
    {
        if (age < 0 || age > 100)
        {
            cout << "invalid age " << endl;
            return;
        }
        age = x;
    }

    void setgrade(string s)
    {

        grade = s;
    }

    string getgrade(int pin)
    {
        if (pin == 123)
            return grade;

        return " ";
    }

    void setrollno(int r)
    {
        rollno = r;
    }

    void getname()
    {
        cout << name << endl;
    }

    void getage()
    {
        cout << age << endl;
    }

    int getrollno()
    {
        return rollno;
    }
};

int main()
{

    student s1;
    s1.setname("");
    s1.setage(10);
    s1.setrollno(21);
    s1.setgrade("A+");

    // s1.getname();
    // s1.getage();
    cout << s1.getrollno() << endl;

    cout << s1.getgrade(123);
}


// padding concept

// class student
// {
//     int a;
//     char b;
//     char c;

// };

// int main(){

// student s1;
// cout<<sizeof(s1);

// }


