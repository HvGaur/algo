#include<iostream>
#include<vector>

using namespace std;

void counting_sort(vector<int> &nums){
    int n = nums.size();
    int lar = INT_MIN;
    for(int num : nums){
        lar = max(num, lar);
    }
    vector<int> freq(lar+1, 0);
    for(int num : nums){
        freq[num]++;
    }
    int j = 0;

    for(int i = 0; i < n; i++){
        while(freq[i]>0){
            nums[j++] = i;
            freq[i--];
        }
    }
}

int main(){
    vector<int> vect1{ 5,8,3,1,1,30,8 };
    counting_sort(vect1);
    for(int num : vect1){
        cout << num << " ";
    }
}