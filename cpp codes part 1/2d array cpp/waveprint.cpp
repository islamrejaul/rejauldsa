#include<iostream>
using namespace std;
int main(){

int m;
cout<<"enter the row of matrix";
cin>>m;

int n;
cout<<"enter the cols of matrix";
cin>>n;

int arr[m][n];
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cin>>arr[i][j];
    }
}

//wave print

for(int i=0;i<m;i++){
    if(i%2==0){
        for(int j=0;j<n;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      





    else{    // i=1,3,5
    for(int j=n-1;j>=0;j--){
        cout<<arr[i][j];
    }
    cout<<endl;

    }
}









    return 0;
}