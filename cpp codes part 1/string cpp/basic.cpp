#include <iostream>
using namespace std;
#include<algorithm>
#include<climits>
float max(float a,float b){
    if(a>=b) return a;
    else return b;
}


float min(float a,float b){
    if(a<=b) return a;
    else return b;
}



int main()
{

 int arr[]={4,5,3};
int n=3;
float kmin=(float)(INT_MIN);
float kmax=(float)(INT_MAX);
bool flag=true;
for(int i=0;i<n-1;i++){
    if(arr[i]>=arr[i+1]){
        kmin=max(kmin,(arr[i]+arr[i+1])/2.0);
    }
else{
    kmax=min(kmax,(arr[i]+arr[i+1])/2.0);

}
if(kmin>kmax){
    flag =false;
    break;
}
}

    kmax=(int)kmax;

if(flag==false) cout<<-1;
else if(kmin==kmax){
    if(kmin-(int)kmin==0){
        cout<<"there is only one value of k "<<kmin;

    }
    else cout<<-1;
}

else{
    if(kmin-(int)kmin>0){
        kmin=(int)kmin+1;
    }

    cout<<"range of k is ["<<kmin<<","<<kmax<<"]";
}






    return 0;
}