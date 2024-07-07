#include<iostream>

using namespace std;

bool checkPowerofTwo(int n){
    return ((n)&(n-1)) == 0;
}

int main(){
    int n = 1024;
    bool uhuh = checkPowerofTwo(n);
    if(uhuh) cout << "Yes";
    else cout << "Nope";
    return 0;
}