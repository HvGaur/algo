#include<iostream>

using namespace std;

int max(int arr[], int n){
    int m = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] > m)  m = arr[i];
    }
    return m;
}

int min(int arr[], int n){
    int m = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] < m)  m = arr[i];
    }
    return m;
}

int main(){
    int arr[] = {1,2,40,-4,50};
    int size = sizeof(arr)/sizeof(arr[0]);
    int lar = max(arr, size);
    int smol = min(arr, size);
    cout << lar << endl << smol;
}