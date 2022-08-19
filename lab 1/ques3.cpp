#include <bits/stdc++.h>
using namespace std;
#define ll long long int

// Recursive

int addup(int n){
    int temp=0;
    if(n>0){
        temp = n+addup(n-1);
    }
    return temp;
}
int main(){
    int n;
    cin>>n;
    if(n<0){
        cout<<"Enter valid number"<<endl;
    }else if(floor(n)!=ceil(n)){
        cout<<"Enter valid number"<<endl;
    }else{
        cout<<addup(n);
    }
    return 0;
}


// Iterative

int main(){
    int n;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }cout<<sum<<endl;
}

