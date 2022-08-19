#include <bits/stdc++.h>
using namespace std;
#define ll long long int

// Recursive

bool ispali(string s,int n,int m){
    if(s.size()%2==0){
        if(s[n]==s[m]){
            if(n==(s.size()/2-1)&&m==(s.size()/2)){
                return true;
            }
            n++;
            m--;
            return (ispali(s,n,m));
        }else{
            return false;
        }
    }else{
        if(n==s.size()/2){
            return true;
        }
        else if(s[n]==s[m]){
            n++;
            m--;
            return (ispali(s,n,m));
        }else{
            return false;
        }
    }
}

int main(){
    string s;
    cin>>s;
    int n = 0;
    int m = s.size()-1;
    cout<<ispali(s,n,m);
}

// Iterative

int main(){
    string s1,s2="";
    cin>>s1;
    for(int i=s1.size()-1;i>=0;i--){
        s2+=s1[i];
    }if(s1==s2){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}