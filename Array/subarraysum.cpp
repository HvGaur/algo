#include<iostream>

using namespace std;

void maxsum(int arr[], int n){
    int maxsum = INT_MIN;
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            int tsum = 0;
            for(int k = i; k <= j; k++){
                // cout << arr[k] << "  ";
                tsum += arr[k];
            }
            if(tsum > maxsum) maxsum = tsum;
            // cout << endl;
        }
    }
    cout << maxsum;
}

int main(){
    int arr[] = {10,20,30,40,50,-100};
    int n = sizeof(arr)/sizeof(arr[0]);
    maxsum(arr, n);
}