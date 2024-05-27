#include<iostream>

using namespace std;

int beautifulSubsets(int nums[], int n, int k) {
        // int n = nums.size();
        int count = 0;
        for(int i = 0; i<n; i++){
            for(int j=i;j<n;j++){
                if(abs(nums[i]-nums[j]) != k)    count++;
            }
        }
        return count;
}

int main(){
    int arr[] ={4,2,5,9,10,3};
    int k = 1;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << beautifulSubsets(arr, n, k);
}