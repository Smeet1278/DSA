#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int delatind(int ar[],int position,int size){
    for(int i=0;i<size;i++){
        if(i!=position){
            cout<<ar[i]<<" ";
        }
    }
    return 0;
}

int main(){
    int ar[3]={1,2,3};
    int position = 0;
    delatind(ar,position,3);
    return 0;
}