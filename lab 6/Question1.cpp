#include<bits/stdc++.h>
#define here cout<<"Here"<<endl 
using namespace std;
vector<int> v(15,INT_MAX);


class HashTable{
    public:
    int Key;
    HashTable(int key){
        this->Key = key;
        v.clear();
        v.resize(Key,INT_MAX);
    }

    bool check(int n){
        int key = Key;
        int k = n%key;
        if(v[k]==n){
            return true;
        }
        else{
            int tempVar = k;
            while(v[++k]!=INT_MAX){
                if(k==key) k=0;
                if(k==tempVar) return false;
                if(v[k]==n) return true;
            }
            return false;
        }

        return false;
    }

    void insert(int n){
        bool flag = false;
        int k = n%Key;
        if(v[k]==INT_MAX){
            v[k]=n;
        }
        else{
            int tempVar = k;
            while(v[++k]!=INT_MAX){
                if(k==Key) k=0;
                if(k==tempVar){
                    flag = true;
                    cout<<"Hash Table Full";
                    break;
                }
            }
            if(!flag) v[k] = n;
        }
        if(flag){
            cout<<"Table Full"<<endl;
            return;
        }        
    }
    
};



int main(){
   
    HashTable h1(17);
    h1.insert(97);
    h1.insert(83);
    h1.insert(563);
    h1.insert(346);
    h1.insert(176);
    if(h1.check(97)) cout<<97<<" is present."<<endl;
    else cout<<"97 is not Found"<<endl;
    if(h1.check(80)) cout<<80<<" is present."<<endl;
    else cout<<"80 is not Found"<<endl;
    if(h1.check(176)) cout<<176<<" is present."<<endl;
    else cout<<"176 is not Found"<<endl;

    HashTable h2(37);
    h2.insert(97);
    h2.insert(83);
    h2.insert(563);
    h2.insert(346);
    h2.insert(176);
    if(h2.check(97)) cout<<97<<" is present."<<endl;
    else cout<<"97 is not Found"<<endl;
    if(h2.check(80)) cout<<80<<" is present."<<endl;
    else cout<<"80 is not Found"<<endl;
    if(h2.check(176)) cout<<176<<" is present."<<endl;
    else cout<<"176 is not Found"<<endl;

    return 0;
}
