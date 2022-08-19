#include <bits/stdc++.h>
using namespace std;
#define ll long long int

// Recursive

int fib(int n){
    if(n==1){
        return 0;
    }else if(n==2){
        return 1;
    }int temp = fib(n-1)+fib(n-2);
    return temp;
}
int main(){
    int n;
    cin>>n;
    cout<<fib(n);
    return 0;
}

// Iterative

int main(){
    int n;
    cin>>n;
    int x=0;
    int y=1;
    vector<int>arr;
    arr.push_back(x);
    for(int i=1;i<n;i++){
        int temp = x+y;
        x = y;
        y = temp;
        arr.push_back(x);
    }cout<<arr[n-1];
}