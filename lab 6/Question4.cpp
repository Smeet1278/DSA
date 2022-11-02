#include <bits/stdc++.h>
using namespace std;

void insert(vector<int> &v,int n){
    int key = v.size();
    int k = n%key;
    v[k]=1;
}

bool check(vector<int> v,int n){
    int key = v.size();
    int k = n%key;
    if(v[k]==1) return true;
    return false;
}

int main(){

    vector<int> v1(17);
    vector<int> v2(37);

    
    insert(v1,85);
    insert(v1,134);
    insert(v1,59);
    insert(v1,233);

    insert(v2,138);
    insert(v2,85);
    insert(v2,134);
    insert(v2,59);
    insert(v2,233);

    if(check(v1,100)) cout<<"100 is present in table 1"<<endl;
    else cout<<"100 is not present in table 1"<<endl;

    if(check(v1,138)) cout<<"133 is present in table 1"<<endl;
    else cout<<"133 is not present in table 1"<<endl;

    if(check(v1,233)) cout<<"233 is present in table 1"<<endl;
    else cout<<"233 is not present in table 1"<<endl;

    return 0;
}
