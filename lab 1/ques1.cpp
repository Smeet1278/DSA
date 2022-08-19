#include <bits/stdc++.h>
using namespace std;
#define ll long long int


// Recursive

int solve(int n){
    int temp=1;
    if(n==1||n==0){
        return 1;
    }else{
        temp = n*solve(n-1);
    }
    return temp;
}
int main(){
    double n;
    cin>>n;
    if(n<0){
        cout<<"Enter valid number"<<endl;
    }else if(floor(n)!=ceil(n)){
        cout<<"Enter valid number"<<endl;
    }else{
        cout<<solve(n);
    }
    return 0;
}


// Iterative 

int main(){
    double n;
    cout<<"Enter to number: ";
    cin>>n;
    ll ans=1;
    if(n<0){
        cout<<"Enter valid number"<<endl;
    }else if(floor(n)!=ceil(n)){
        cout<<"Enter valid number"<<endl;
    }else{
        for(ll i=n;i>=1;i--){
            ans*=i;
        }cout<<ans<<endl;
    }
    return 0;
}