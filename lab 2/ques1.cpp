#include<iostream>
using namespace std;
#define ll long long int

int solve(int ar[],int n,int size){
    int x=0;
    for(int i=0;i<size;i++){
        if(ar[i]==n){
            cout<<i;
            x=1;
            break;
        }
    }if(x==0){
        cout<<-1<<endl;
    }return 0;


}

int main()
{
    int ar[3]={10,5,7};
    solve(ar,7,3);
    cout<<endl;
    solve(ar,9,3);


    return 0;
}