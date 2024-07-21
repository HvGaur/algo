#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;


int getFibByMemo(int n, unordered_map<int, int> memo = {}){
    if(memo.count(n)) return memo[n];
    if(n == 0) return 0;
    if(n == 1) return 1;
    memo[n] = getFibByMemo(n-1) + getFibByMemo(n-2);
    return memo[n];
}

long long fibDP(int n){
    if(n==0) return 0;
    vector<long long> dp(n+1);
    dp[0] = 0;
    dp[1] = 1;
    for(int i = 2; i <= n; i++) dp[i] = dp[i-1] + dp[i-2];
    return dp[n];
}

int main(){
    // cout << getFibByMemo(40);
    cout << fibDP(100);
}