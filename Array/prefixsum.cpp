#include<iostream>

using namespace std;

int prefixsum(int arr[], int n){
    int prefix[n];
    prefix[0] = arr[0];
    for(int i = 1; i<n; i++){
        prefix[i] = arr[i] + prefix[i-1];
    }
    int maxx = INT_MIN;
    for(int i = 0; i < n; i++){
        for(int j = i; j< n; j++){
            int subsum = i>0? prefix[j] - prefix[i-1] : prefix[j];
            maxx = max(maxx, subsum);
        }
    }
    return maxx;
}

int main(){
    int arr[] = {-10,20,30,50,-10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int maxx = prefixsum(arr, n);
    cout << maxx << endl;
}