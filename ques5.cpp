#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int insatbeg(int ar[],int element,int size){
    for(int i=0;i<size+1;i++){
        if(i==0){
            cout<<element<<" ";
        }else{
            cout<<ar[i-1]<<" ";
        }
    }
    return 0;
}

int main(){
    int ar[3]={1,2,3};
    insatbeg(ar,0,3);
    return 0;
}