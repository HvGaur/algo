#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9};

    int key = 9;
    
    vector<int>::iterator it = find(arr.begin(), arr.end(), key); //goes till arr.end() which is outside the array

    if(it != arr.end()) cout << "Element present at idx: " << it - arr.begin();
    else cout << "Not found";

    return 0;
}