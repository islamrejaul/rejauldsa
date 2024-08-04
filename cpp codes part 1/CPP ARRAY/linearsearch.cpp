#include<iostream>
using namespace std;
int main(){

int n;
cout<<"enter the size of an array";
cin>>n;
int arr[n];

for(int i=0;i<=n-1;i++){
    cin>>arr[i];
}
cout<<"enter the element u want to search";
int x;
cin>>x;

for(int i=0;i<=n-1;i++){
   if(arr[i]==x){
    cout<<"yes the  element is persent";
   }
}



    return 0;
}