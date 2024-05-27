#include<iostream>

using namespace std;

void dis(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

void zeroend(int arr[], int n){
    int count = 0;
        for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            // arr[count++] = arr[i]; 
            swap(arr[count++], arr[i]);
        }
    }
    
    // while (count < n) {
    //     arr[count++] = 0;
    // }
    dis(arr, n);
}

int main(){
    int arr[] = {5,0,0,13,4,23,0,9,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    zeroend(arr, size);
}