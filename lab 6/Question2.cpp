#include<bits/stdc++.h>
using namespace std;
vector<int> v(17,INT_MAX);
    
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
            bool flag = false;
            int i=0;
            while(v[k]!=INT_MAX){
                if(k>=key){
                    k=0;
                    flag = true;
                }
                if(flag && k>=tempVar){
                    return false;
                }
                if(k==tempVar) return false;
                if(v[k]==n) return true;
                i++;
                k = (k+i*i)%Key;
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
            int i=0;
            while(v[k]!=INT_MAX){
                if(k>=Key) k=0;
                if(k==tempVar){
                    flag = true;
                    cout<<"Hash Table Full";
                    break;
                }
                i++;
                k = (k+i*i)%Key;
                
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
    h1.insert(205);
    h1.insert(95);
    h1.insert(65);
    h1.insert(55);

    if(h1.check(60)) cout<<"60 is in table 1"<<endl;
    else cout<<"60 is not in hashtable 1"<<endl;

    if(h1.check(205)) cout<<"205 is in table 1"<<endl;
    else cout<<"205 is not in hashtable 1"<<endl;


    HashTable h2(37);
    h2.insert(205);
    h2.insert(70);
    h2.insert(85);
    h2.insert(65);
    h2.insert(25);

    if(h1.check(60)) cout<<"60 is in table 2"<<endl;
    else cout<<"60 is not in the hashtable 2"<<endl;

    if(h1.check(205)) cout<<"205 is in table 2"<<endl;
    else cout<<"205 is not in hashtable 2"<<endl;
    
}
