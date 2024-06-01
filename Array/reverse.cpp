#include<iostream>

using namespace std;

void rev(int arr[], int n){
    int s = 0;
    int e = n-1;
    while(s<e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}

int main(){
    int arr[] = {3,4,5,6,7,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    rev(arr, size);
    for(auto x : arr){
        cout << x << " ";
    }
}