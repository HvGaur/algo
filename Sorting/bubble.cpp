#include<iostream>

using namespace std;

void bubble_sort(int arr[], int n){
    for(int i = 1; i <n-1; i++){
        for(int j = 0; j <= n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main(){
    int arr[] = {5,6,74,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr, size);
    for(auto x : arr){
        cout << x << " ";
    }
}