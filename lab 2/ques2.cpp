#include<bits/stdc++.h>
using namespace std;
#define ll long long int;
int insatind(int ar[],int position,int element, int size){
    int flag=0;
    int newarr[size+1];
    for(int i=0;i<=size;i++){
        if(flag==1){
            newarr[i]=ar[i-1];
        }
        else if(i!=position){
            newarr[i]=ar[i];
        }
        else if(i==position){
            newarr[i]=element;
            flag=1;
        }

    }
    for(int i=0; i<=size; i++){
        cout<<newarr[i]<<" ";
    }return 0;

}
int main()
{
    int ar[3]={1,2,3};
    insatind(ar,3,1,3);

    return 0;
}