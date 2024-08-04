

 // function overloading



// #include<iostream>
// using namespace std;


// class area
// {
//     public:
//    int calculateArea(int r){    // circle area
// return 3.14*r*r;
//     }

//     int calculateArea(int l,int b){    // rectangle area
//         return l*b;
//     }
// };

// int main(){

//     area A1,A2;
//     cout<<A1.calculateArea(4)<<endl;
//     cout<<A1.calculateArea(3,4)<<endl;
//     cout<<A2.calculateArea(3,4)<<endl;

// }







// operator overloading



// #include <iostream>
// using namespace std;

// class complex
// { 

// int real, img;

//     public:
   
//     complex(int real, int img)
//     {
//         this->real = real;
//         this->img = img;
//     }

//     complex()   // deafult constructor for "complex ans"
//     {
//     }

//     void display()
//     {
//         cout << real << " +i" << img << endl;
//     }

//     complex operator+(complex &C)
//     {
//         complex ans; // ei object tar memory allocation r jonno constructor lagbe....but as we created a constructor(named complex) by ourselves...tai compiler default constructor toiri kor6e na
//         ans.real = real + C.real;  // real means C1.real  and C.real means C2.real
//         ans.img = img + C.img;
//         return ans;
//     }
// };

// int main()
// {

//     complex C1(3, 2);
//     complex C2(4, 6);

//     complex C3 = C1 + C2; //  C1.+fun(C2)      C1  '+' function ta k call kor6e....C2 as a argument pass ho66e(pass by reference)...C1 calling object

//     C3.display();
// }







// virtual function   case 1


// #include<iostream>
// using namespace std;


// class animal
// {
//     public:

//     void speak(){
//         cout<<"huhu\n";

//     }
// };



// class dog: public animal
// {
//     public:

//     void speak(){    // same function name with same parameter as parent function has
//         cout<<"bark\n";

//     }
// };



// int main(){



// animal* p;   // p namok pointer ta animal class k point kore a6e( eivabe vaba jete pare)
//  p = new dog;  // dynamically memory allocation runtime a hoy...tai compile time a ei line ta execute hobe na..skip hobe
// p->speak();  // compile time ei decide hoye ja66e j animal class r speak() call hobe

// }








// virtual function   case 2


// #include<iostream>
// using namespace std;


// class animal
// {
//     public:

//     virtual void speak(){   // virtual means computer k bola ho66e runtime a decide koro kon fun() ta call korbe
//         cout<<"huhu\n";

//     }


//   void roti(){
//     cout<<"hello\n";
//   }
    


// };



// class dog: public animal  // animal r sob property ba attributes e dog r moddhe chole as6e...tai main fun() r moddhe animal datatype r pointer r moddhe dog datatype r obj r address store korte par6i...inherit na korle store korte parbo na..error debe.....inherit korar por animal and dog class 2to same hoye ga6e just name alada
// {
//     public:

//     void speak(){    // ei fun() ta call hobe
//         cout<<"bark\n";

//     }

//   void roti(){
//     cout<<"hello reja \n";
//   }
    
  
// };



// int main(){



// animal* p;   
//  p = new dog;  
// p->speak();  // virtual keyword use korar por p kon class r moddhekar fun() k call korbe seta compile time a decide hobe na...seta decide hobe runtime a depending on p r moddhe kon class r object r address store a6e..j class r object r  address store thakbe tar moddhe kar fun() kei call korbe

// // p->roti();  // roti() parent fun() r moddhe na thakle roti k acccess e kora jabe na

// // main point holo....animal r moddhe dog r common attributes gulo e dhukbe




// }










// keno atto jotil code lik6i ??



//  #include<iostream>
//  #include<vector>
// using namespace std;


// class animal
// {
//     public:

//    virtual void speak(){
//         cout<<"huhu\n";

//     }
// };



// class dog: public animal
// {
//     public:

//     void speak(){    
//         cout<<"bark\n";

//     }
// };


// class cat: public animal
// {
//     public:

//     void speak(){    
//         cout<<"meow\n";

//     }
// };






// int main(){


// // dog d1;
// // d1.speak();  // bark print korar jonno ei easy code lik6i na kno? ans is given below.....



// animal* p;
// vector<animal*> animals;
// animals.push_back(new dog);
// animals.push_back(new cat);
// animals.push_back(new animal);
// animals.push_back(new dog);
// animals.push_back(new cat);


// // printing the array

// for(int i=0;i<animals.size();i++){
//     p=animals[i];
//     p->speak();
// }





// }











// pure virtual function


// #include<iostream>
// using namespace std;


// class animal
// {
//     public:

//     virtual void speak()=0;    // pure vitual function...eta lekhar por animal class r kono object create kora jabe na
     
// // NB: abstract class lekhar por....speak() function k sobkota child class r moddhe liktei hobe nahole error debe
    

// };



// class dog: public animal 
// {
//     public:

//     void speak(){    
//         cout<<"bark\n";

//     }

// };



// int main(){



// animal* p;   
//  p = new dog;  // p=new animal  eta lekha jabe na error debe
// p->speak();  







// }


