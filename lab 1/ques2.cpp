#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void fourth(){
    cout<<"I am the fourth"<<endl;
}
void third(){
    fourth();
    cout<<"I am the third"<<endl;
}
void second(){
    third();
    cout<<"I am the second"<<endl;
}
void first(){
    second();
    cout<<"I am the first"<<endl;
}
int main(){
    first();
    return 0;
}