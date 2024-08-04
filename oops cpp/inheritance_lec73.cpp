#include<iostream>
using namespace std;



class human
{
    private:
    int a;
    protected:
    int b;
    public:
    int c;



//within the class  value change korbo

void fun(){  // ei function ta k ami protected class r moddhe o rakte partam...kono problem hobe na...but ei fun k private r moddhe rakha jabe na
    a=10;
    b=20;
    c=10;
}










};







int main(){




human rohit;

// rohit.a=10;   error di66e bcz a private class r moddhe a6e

// rohit.b=10;    error debe bcz b protected class r moddhe a6e external code(int main theke) theke access kora jabe na

// rohit.c=10;    eta error debe na karon c public class r moddhe a6e

rohit.fun();  // within the class public protected private sob data kei access korte parbo(tobe data gulo same class r hote hobe)







}









