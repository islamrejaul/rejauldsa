

// // example 1

// // using normal method

// // #include<iostream>
// // using namespace std;

// // int main(){
// //     int a,b;
// //     cin>>a>>b;

// //     if(b==0) {
// //         cout<<" divide by zero is not possible\n";
// //         return 0; // return hit korle...main function r baire beriye jabe
// //     }
// //     int c=a/b;    // 4/0= undefined

// //     cout<<c<<endl;
// // }

// //  using try catch throw

// #include <iostream>
// using namespace std;

// int main()
// {
//     int a, b;
//     cin >> a >> b;

//     try
//     {

//         if (b == 0)
//             throw " divide by zero is not possible";                  // throw 10
//         int c = a / b; // ei line gulo  error dite pare
//         cout << c << endl;
//     }
//     catch (const char *e)                                              // catch(int e)
//     {
//         cout << "exception occurred : " << e << endl;
//     }
// }

// Example 2

// #include <iostream>

// #include<exception> // exception class ta standard library r moddhe already a6e

// using namespace std;

// int main()
// {

//     try
//     {// too large array size    // online compiler a error handle hoye ja66e....error debe na
//         int *p = new int[100000000000000]; // ei line ta akta exception class r object throw korbe ...jeta catch r moddhe dhukbe
//         cout << "memory allocation is successful\n";  // ekhane throw keyword likhini...system nijer thekei throw kore diye6e
//         delete[] p;
//     }
//     catch (const exception &e)      // exception holo akta class...e holo exception class r object
//     {                                                         
//         cout << " exception occurred : " << e.what() << endl; // what() error ta kno as6e seta bole debe...error ta ki type r seta bole debe...what() function  tao standard library r moddhe a6e
//     }
 
// }

// exception-> parent class  // exception class r moddhe baki sob class gulo a6e
// bad_alloc-> child class of exception class




// eaxmple 3 


// #include <iostream>

// #include<exception> // exception class ta standard library r moddhe already a6e

// using namespace std;

// int main()
// {

//     try
//     {// too large array size    // online compiler a error handle hoye ja66e....error debe na
//         int *p = new int[100000000000000]; // ei line ta akta exception class r object throw korbe ...jeta catch r moddhe dhukbe
//         cout << "memory allocation is successful\n";  // ekhane throw keyword likhini...system nijer thekei throw kore diye6e
//         delete[] p;
//     }
//     catch (const bad_alloc &e)      // exception holo akta class...e holo exception class r object
//     {                                                         
//         cout << " exception occurred : " << e.what() << endl; // what() error ta kno as6e seta bole debe...error ta ki type r seta bole debe...what() function  tao standard library r moddhe a6e
//     }
 
// }










