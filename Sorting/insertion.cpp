#include<iostream>

using namespace std;

void insertion_sort(int a[], int n){
    for(int i = 1; i <n; i++)
    {
        int cur = a[i];
        int prev = i-1;

        while(prev>=0 and a[prev]>cur){
            a[prev+1] = a[prev];
            prev = prev - 1;
        }
        a[prev+1] = cur;
    }
}

using namespace std;

int main(){
    int arr[] = {-4,-9,9,-10,66,78,6,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    insertion_sort(arr, size);

    for(auto x : arr){
        cout << x << " ";
    }
}