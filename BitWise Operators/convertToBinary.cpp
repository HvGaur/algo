#include<iostream>

using namespace std;

int convertToBinary(int &n){
    int ans = 0;
    int p = 1;
    while(n>0){
        int last = n&1;
        ans += p*last;
        // ans = ans*10;
        p = p*10;
        n = n>>1;
    }
    return ans;
}

int main(){

    int n = 10;
    int h = convertToBinary(n);
    cout << h;
    return 0;
}