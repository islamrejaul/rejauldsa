#include<iostream>
#include<vector>
using namespace std;

//Q rotate of a vector
void display(vector<int>v){
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
    cout<<endl;
}
void reversepart(int i,int j,vector<int>&a){
    while(i<=j){
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
    i++;
    j--;
    }
}

int main()
{

vector<int>v;
v.push_back(1);
v.push_back(6);
v.push_back(2);
v.push_back(3);
v.push_back(7);
v.push_back(4);
v.push_back(8); 
display(v);                  
int n=v.size();
int k=20;
if(k>n) k=k%n;

reversepart(0,n-k-1,v);
reversepart(n-k,n-1,v);
reversepart(0,n-1,v);
display(v);



                                                       
    return 0;
}


 