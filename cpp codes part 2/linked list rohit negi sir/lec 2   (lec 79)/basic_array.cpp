

// deleting element from a specific position in array



// #include<iostream>
// using namespace std;



// int main(){


// int a[5]={1,2,3,4,5};
// int pos;
// int i;
// cout<<"enter the position(index) of the aarray from where u want to delete the element\n";
// cin>>pos;

// for(i=pos;i<5;i++){     // puro array traverse kor6i using loop tai T.C= O(N)
//     a[i]=a[i+1];

// }

// //print  the array after deletion

// for(i=0;i<4;i++){
//     cout<<a[i]<<" ";
// }






// }





// deleting the last element of the array




// In C++, the size of a statically allocated array cannot be changed after it is defined. 
// However, you can work around this by just pretending the array is smaller and not using the elements beyond the new size.

// int main(){



// int size =5;
// int a[size]={1,2,3,4,5};

// for(int i=0;i<size;i++){
//     cout<<a[i]<<" ";
// }
// cout<<endl;
// cout<<(sizeof(a)/sizeof(int))<<endl;


// size--;



// for(int i=0;i<size;i++){
//     cout<<a[i]<<" ";
// }
// cout<<endl;
// cout<<(sizeof(a)/sizeof(int))<<endl;





// }


