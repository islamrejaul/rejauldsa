#include<iostream>
using namespace std;
int main(){

int n;
cin>>n;
int arr[n];
for(int i=0;i<=n-1;i++){
    cin>>arr[i];
}

                        
int x,count=0;
cin>>x;

for(int i=0;i<=n-1;i++){
    if(arr[i]>x) count++;
}
cout<<count;                         
                    
                                                                                                                                  
    return 0;
}