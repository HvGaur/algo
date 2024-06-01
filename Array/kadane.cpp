#include<iostream>

using namespace std;

int kadane(int arr[], int n){
    int csum = 0;
    int msum = 0;
    for(int i=0;i<n;i++){
        csum = csum+arr[i];
        if(csum < 0) csum = 0;
        msum = max(csum, msum);
    }
    return msum;
}

int main(){
    int arr[] = {-2,3,4,-1,3,-12,6,1,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int maxsum = kadane(arr,n);
    cout << maxsum << endl;
}