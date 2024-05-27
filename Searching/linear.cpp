#include<iostream>
#include<algorithm>

using namespace std;

int lin_search(int arr[], int n, int k){
    for(int i = 0; i<n; i++){
        if(arr[i] == k) return i;
    }
    return -1;
}

int main(){
    int arr[] = {3,4,7,6,5,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key = 10;
    int pos = lin_search(arr, size, key);
    cout << pos << endl;
}