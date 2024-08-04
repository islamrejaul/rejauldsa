#include<iostream>
using namespace std;

int fact(int x){
    int fact=1;
    for(int i=1;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}


int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    
for(int i=1;i<=n;i++){
    cout<<fact(i)<<endl;
}





}