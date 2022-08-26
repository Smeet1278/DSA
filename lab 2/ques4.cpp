#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int insatend(int ar[],int element,int size){
    for(int i=0;i<size+1;i++){
        if(i==size){
            cout<<element;
        }else{
            cout<<ar[i]<<" ";
        }
    }
    return 0;
}

int main(){
    int ar[3]={1,2,3};
    insatend(ar,4,3);
    return 0;
}