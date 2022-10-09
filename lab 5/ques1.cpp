#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{   
    int n=6;
    int arr[n] = {3,2,1,4,5,6};
    
    // int arr[n] = {1,2,3,4,5,6};
    int flag = 0;
    for (int i = 0; i < 6; i++)
    {
        int count = 6 - i - 1;
        for (int j = i + 1; j < 6; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            else
            {
                count--;
            }
            // for(auto i : arr){
            //     cout << i << " ";
            // }
            // cout << endl;
            // cout << count << endl;
            if (count == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            break;
        }
    }
    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }
    // cout<<flag;
    return 0;
}