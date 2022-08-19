#include <bits/stdc++.h>
using namespace std;
#define ll long long int

// Recursive

int prodarr(int ar[],int n,int i){
    if(n==i){
        return 1;
    }return ar[i]*prodarr(ar,n,i+1);
    
}

int main(){
    int ar[3]={2,5,10};
    int n = 3;
    cout<<prodarr(ar,n,0);
    return 0;
}

// Iterative

int main(){
    int ar[3]={2,5,10};
    int ans = 1;
    for(int i = 0; i < 3; i++){
        ans*=ar[i];
    
    }cout<<ans;
    return 0;
}

