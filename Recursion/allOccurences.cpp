// given a vector, find all the occurences of an integer k

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> getAllOccurences(vector<int> nums, int k)
    {
        vector<int> ans;
        helper(nums, k, ans);
        return ans;
    }

private:
    void helper(vector<int> nums, int k, vector<int> &ans, int idx = 0)
    {
        if (idx == nums.size())
            return;
        if (nums[idx] == k)
            ans.push_back(idx);
        helper(nums, k, ans, idx + 1);
    }
};

int main()
{
    vector<int> arr;
    arr.push_back(5);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(7);
    arr.push_back(5);
    arr.push_back(10);
    arr.push_back(30);
    arr.push_back(31);
    arr.push_back(5);
    arr.push_back(34);
    Solution s;
    vector<int> res = s.getAllOccurences(arr, 5);
    for (auto r : res)
    {
        cout << r << "  ";
    }
    return 0;
}