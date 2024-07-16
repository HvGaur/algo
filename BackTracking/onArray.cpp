#include<iostream>

using namespace std;

void printArray(int *arr, int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void fill(int *arr, int n, int val = 1, int idx = 0){
    if(idx == n){
        printArray(arr, n);
        return;
    }
    arr[idx] = val;
    //rec case
    fill(arr, n, val+1, idx+1);
    //backtrack
    arr[idx] *= -1;
}

int main(){

    int arr[100];
    int n = 5;
    fill(arr, n);
    printArray(arr, n);

}