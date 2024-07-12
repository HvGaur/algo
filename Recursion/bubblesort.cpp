#include<iostream>

using namespace std;

void bubble_sort(int arr[], int n){
    if(n==1) return;
    for(int j = 0; j < n-1;j++){
        if(arr[j]>arr[j+1]) swap(arr[j], arr[j+1]);
    }
    bubble_sort(arr, n-1);
}

int main(){
    int arr[] = {5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr, n);
    for(auto i: arr){
        cout << i;
    }
    return 0;
}