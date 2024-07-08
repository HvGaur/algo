#include <iostream>
#include <vector>

using namespace std;

int firstOccurence(vector<int> arr, int target, int idx = 0)
{
    if(idx == arr.size()) return -1;
    if(arr[idx] == target){
        return idx;
    }
    int subidx = firstOccurence(arr, target, idx+1);
    if(subidx != -1){
        return subidx;
    }
    return -1;
}

int lastOccurence(vector<int> arr, int target, int idx = 0){
    if(idx == arr.size()) return -1;
    int subidx = lastOccurence(arr, target, idx+1);
    if(subidx == -1){
        if(arr[idx] == target){
            return idx;
        }
        else return -1;
    }
    else return subidx;

}

int main()
{
    vector<int> arr;
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(7);
    arr.push_back(9);
    arr.push_back(10);
    arr.push_back(30);
    arr.push_back(31);
    arr.push_back(7);
    arr.push_back(34);
    int target = 7;
    int f = lastOccurence(arr, target);
    cout << f;
    return 0;
}