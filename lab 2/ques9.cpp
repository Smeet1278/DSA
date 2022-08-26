#include <bits/stdc++.h>
using namespace std;
#define ll long long
int flag = 0;
void replaceInd(int ar[], int p, int e, int size)
{
    if (p >= size)
    {
        cout << -1<<endl;
        flag=1;
        return;
    }
    else
    {

        for (int i = 0; i < size; i++)
        {
            if (i == p)
            {
                ar[i] = e;
            }
        }
    }
}

void display(int ar[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << ar[i] << " ";
    }
}

int main()
{
    int ar[5] = {2, 4, 6, 8, 10};
    int size = 5;
    replaceInd(ar, 7, 14, size);
    if (flag==0)
    {
        display(ar, size);
    }
    return 0;
}