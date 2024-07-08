#include<iostream>

using namespace std;

int getFactorial(int n){
    // int fact = 1;
    //base case
    if(n==0) {
        return 1;
    }
    int ans = n*getFactorial(n-1);
    return ans;
}

int main(){
    int n = 4;
    int f = getFactorial(n);
    cout << f;
    return 0;
}