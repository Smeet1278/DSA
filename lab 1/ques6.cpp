#include <bits/stdc++.h>
using namespace std;
#define ll long long int

// Recursive

int hcf(int a, int b){
    int temp;
if (a < b)
    {
        temp = b % a;
        if (temp == 0)
        {
            return a;
        }
        else
        {
            return hcf(a, temp);
        }
    }
    else if (b < a)
    {
        temp = a % b;
        if (temp == 0)
        {
            return b;
        }
        else
        {
            return hcf(b, temp);
        }
    }
    else
    {
        return a;
    }
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << hcf(a, b);
    return 0;
}

// Iterative

int main(){
    int x,y;
    cin>>x>>y;
    int res = min(x,y);
    for(int i=res;i>=1;i--){
        if(x%i==0&&y%i==0){
            cout<<i;
            break;
        }
    }
    return 0;
}