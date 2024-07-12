#include<iostream>

using namespace std;

void bubble_sort_two(int arr[], int n, int j = 0){
    if(n==1) return;
    if(j == n-1){
        bubble_sort_two(arr, n-1, 0);
        return;
    }
    if(arr[j] > arr[j+1]) swap(arr[j], arr[j+1]);
    bubble_sort_two(arr, n, j+1);
}

int main(){
    int arr[] = {5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubble_sort_two(arr, n);
    for(auto i: arr){
        cout << i;
    }
    return 0;
}