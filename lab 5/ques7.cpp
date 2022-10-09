#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int partition(int arr[], int lo, int hi)
{
    int pivot = arr[hi]; 
    int i = (lo - 1); 
    for (int j = lo; j <= hi - 1; j++) 
    {
        if (arr[j] <= pivot) {
            i++; 
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[hi]);
    return (i + 1);
}
int partition_r(int arr[], int lo, int hi)
{
    srand(time(NULL));
    int random = lo + rand() % (hi - lo);
    swap(arr[random], arr[hi]);
    return partition(arr, lo, hi);
}
void quickSort(int arr[], int lo, int hi)
{
    if (lo < hi) {
        int pi = partition_r(arr, lo, hi);

        quickSort(arr, lo, pi - 1);
        quickSort(arr, pi + 1, hi);
    }
}
  
/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout<<arr[i]<<" "; 
}
  
int main()
{
    int arr[] = { 10, 7, 8, 9, 1, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);
    printf("Sorted array: \n");
    printArray(arr, n);
      
    return 0;
}